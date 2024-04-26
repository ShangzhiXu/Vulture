import requests
import threading
from queue import Queue
import subprocess
import json
import time

num_100 = 0
num_1000 = 0
num_10000 = 0
# Replace 'your_token' with your actual GitHub personal access token


def write_to_file(file_name, data):
    with open(file_name, "a") as file:
        json.dump(data, file, indent=4)

def classify_and_write(repo,language):
    global num_100
    global num_1000
    global num_10000
    stars = repo['stargazers_count']
    repo_name = repo['full_name']
    repo_url = repo['html_url']
    repo_description = repo['description']
    repo_topics = ""
    if repo.keys().__contains__("topics"):
        repo_topics = repo['topics']
    print(repo_name)
    data = {
        "full_name":repo_name,
        "repo_url": repo_url,
        "repo_topics": repo_topics,
        "repo_description": repo_description
    }
    if language == "C":
        write_to_file("../jsondata/C_repos.json", data)
    else:
        write_to_file("../jsondata/cpp_repos.json", data)


def fetch_repos(page, min_stars, max_stars, language):
    #while True:
        #page = queue.get()
    if page is None:
        return

    url = f"https://api.github.com/search/repositories?q=language:{language}+stars:{min_stars}..{max_stars}&sort=stars&per_page=100&page={page}"
    output_filename = "github_response.json"
    print(f"Fetching page {url}...")
    result = subprocess.run(["wget", "-O", output_filename, url],stderr=subprocess.PIPE)
    if (result.returncode != 0):
        print(f"An error occurred while fetching page {page}: {result.stderr}")
        time.sleep(50)
    else:
        time.sleep(5)
    #response = requests.get(url, headers=headers)
    #if response.status_code == 200:
    try:
        with open(output_filename, 'r') as response:
            data = response.read()
            json_data = json.loads(data)
            for repo in json_data['items']:
                classify_and_write(repo,language)
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

def handle_stars(language):
    min_stars = 100
    max_stars = min_stars
    if(language == "C"):
        min_stars = 1005
        max_stars = min_stars
    #queue = Queue()
    while min_stars <= 500:
        max_stars = min_stars + 5
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    while min_stars <= 1000:
        max_stars = min_stars + 100
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    while min_stars <= 10000:
        max_stars = min_stars + 1000
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    max_stars = 300000
    for page in range(1, 11):
        # print("pageout: ", page)
        fetch_repos(page, min_stars, max_stars,language)

    print(num_100)
    print(num_1000)
    print(num_10000)

if __name__ == "__main__":
    handle_stars("C")
    handle_stars("cpp")
        # fetch_repos(1, 50, 20000, "C")
        # fetch_repos(2, 50, 200000, "C")
        # fetch_repos(1, 50, 20000, "cpp")
        # fetch_repos(2, 50, 200000, "cpp")
