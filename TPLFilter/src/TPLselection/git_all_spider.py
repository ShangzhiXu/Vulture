import argparse
import os

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
json_data = []

def write_to_file(file_name, data):
    # if file does not exist, create it and write nothing in it
    if not os.path.exists(file_name):
        with open(file_name, "w") as file:
            file.write("")
    with open(file_name, "a") as file:
        json.dump(data, file, indent=4)

def classify_and_store(repo,language):
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

    json_data.append(data)


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
                classify_and_store(repo,language)
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

def handle_stars(language, stars_min, stars_max):
    min_stars = stars_min
    threshold = min(stars_max, 500)

    while min_stars <= threshold:
        max_stars = min_stars + 5
        for page in range(1, 11):
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    threshold = min(stars_max, 100)
    while min_stars <= threshold:
        max_stars = min_stars + 100
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    threshold = min(stars_max, 10000)
    while min_stars <= threshold:
        max_stars = min_stars + 1000
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    threshold = min(stars_max, 300000)
    while min_stars <= threshold:
        max_stars = min_stars + 10000
        for page in range(1, 11):
            # print("pageout: ", page)
            fetch_repos(page, min_stars, max_stars,language)
        min_stars = max_stars
    write_to_file(language + "_repos.json", json_data)

    print(num_100)
    print(num_1000)
    print(num_10000)

if __name__ == "__main__":
    # Get args,language, stars; user can input more than one language
    # The --stars argument should have two values, which are the minimum and maximum number of stars
    parser = argparse.ArgumentParser()
    parser.add_argument("languages", nargs='+', help="The programming languages to search for")
    parser.add_argument("--stars", nargs=2, type=int, help="The minimum and maximum number of stars")

    args = parser.parse_args()
    languages = args.languages
    stars_min = args.stars[0]
    stars_max = args.stars[1]
    for language in languages:
        handle_stars(language, stars_min, stars_max)








