# test for release api of github
# now we can download the zip or tar or something else from the url

import requests

def get_releases(user, repo):
    releases = []
    page = 1
    while True:
        url = f"https://api.github.com/repos/{user}/{repo}/releases?page={page}"
        print(url)
        response = requests.get(url)
        if response.status_code != 200:
            break
        data = response.json()
        if not data:
            break
        releases.extend(data)
        page += 1
    return releases

# Usage
user = "RT-Thread"
repo = "rt-thread"
all_releases = get_releases(user, repo)
print(f"Total releases: {len(all_releases)}")
