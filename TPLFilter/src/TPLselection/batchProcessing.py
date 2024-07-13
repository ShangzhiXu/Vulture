import json
import os
import subprocess
ml = ["machine learning", "deep learning", "neural network", "artificial intelligence", "AI", "ML", "DL", "NN",
      "tensorflow", "pytorch", "keras",
      "scikit-learn", "scikit", "sklearn", "caffe", "theano", "mxnet", "torch", "torchvision", "torchtext",
      "fastai",
      "cntk", "chainer", "paddlepaddle", "paddle", "xgboost", "lightgbm", "catboost", "mlpack", "ml.net", "mllib",
      "spark mllib", "sparkml", "spark ml"]
games = ["game", "games", "graphics", "3D", "2D", "OpenGL", "DirectX", "Vulkan", "Unity", "Unreal", "CryEngine",
         "Crytek", "game engine", "game development", "3D rendering",
         "OpenGL", "DirectX", "Unity", "Unreal Engine", "graphics engine"]
other = ["bitcoin", "analysis", "market", "markets", "statist", "hack", "film", "editor", "Hands-On", "UTF-8",
         "update", "golang", "moved", "sample", "samples"
                                                "note", "example", "examples","python", "mirror", "exploit", "backdoor",
         "vulnerability", "education", "test", "Junit", "updated", "tested",
         "test case", "test cases", "VPN", "data science"]

other2 = ['opencv', 'TensorFlow', 'computing', 'Reinforcement Learning', 'graphic', 'app',
          'emulate', "emulation" 'simulation', 'simulate', 'paint', "painting", 'Directx', 'desktopApplication',
          "desktopApplications", 'wxllidgets', 'macOS', 'webDevelopment', 'computational', 'chemistry', 'movedsample', 'tutor',
          'Regular', 'expression', 'to match', "matched",
          'learn', "learned", 'fixup', 'demo', "demos", 'modify', "modified", "modifications", 'no longer',
          'inactive', 'Chinese', 'characters', 'grid', 'macOs', 'gner',
          'ctf', "cts", 'collection', 'fork', "forked", "forks", 'https://', 'fuzz', 'homework', "homeworks", 'poc',
          'pocs', "proof of concept", "proof of concepts",
          'leetcode', "teacher", "professor", "instructor", "lecturer", "tutoring", "teaching", "teach", "teaches",
          "taught",
          "genetic", "High memory usage", "Intensive CPU requirements", "Large disk space requirement",
          "Requires constant internet connection", "Not energy efficient",
          "High bandwidth consumption", "Lacks encryption support", "No support for embedded systems",
          "Incompatible with real-time processing", "Limited scalability",
          "No low-power mode", "Non-modular architecture", "Lacks support for wireless protocols",
          "Dependent on high-end hardware", "No support for intermittent connectivity"]
def read_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data


def get_latest_commit_hash(url):
    output = subprocess.check_output(["git", "ls-remote", url, "HEAD"])
    hash = output.split()[0]
    return hash.decode('utf-8')


def write_to_files(outputDirectory, repos, batch_size):
    for i in range(0, len(repos), batch_size):
        batch = repos[i:i + batch_size]
        file_index = i // batch_size + 1

        directoryUrls = outputDirectory + "/urls"
        if not os.path.exists(directoryUrls):
            os.makedirs(directoryUrls)
        urlsFileName = f'git_clone_commands{file_index}.txt'
        urlsFiles_path = os.path.join(directoryUrls, urlsFileName)
        print(urlsFiles_path)

        directoryHashes = outputDirectory + "/hashes"
        if not os.path.exists(directoryHashes):
            os.makedirs(directoryHashes)
        hashesFileName = f'repos_hashes{file_index}.txt'
        hashesFiles_path = os.path.join(directoryHashes, hashesFileName)

        with open(urlsFiles_path, 'w') as clone_file, \
             open(hashesFiles_path, 'w') as hash_file:
        #with open(urlsFiles_path, 'w') as clone_file:
            for repo in batch:
                url = repo['repo_url']  # Adjust the key based on your JSON structure
                clone_file.write(f"git clone {url}\n")

                # commit_hash = get_latest_commit_hash(url)
                # hash_file.write(f"{url} : {commit_hash}\n")


def main():
    json_file_path = '../filterRes/potentialIOT/cpp_repos_potentialIOTRepos.json'
    batch_size = 25  # Number of repos per file

    data = read_json(json_file_path)
    print(len(data))
    for item in data:
        repo_url = item['repo_url']
        repo_name = repo_url.split('/')[-1].split('.')[0]
        has_item = False
        for word in other:
            if word.lower() in repo_name.lower():
                data.remove(item)
                has_item = True
                #print(repo_name)
                break
        if has_item:
            continue
        for word in other2:
            if word.lower() in repo_name.lower():
                data.remove(item)
                #print(repo_name)
                break

    print(len(data))
    # outputDirectory = json_file_path.split('/')[0] + json_file_path.split('/')[1]
    outputDirectory = json_file_path.split('.')[0]
    write_to_files(outputDirectory, data, batch_size)


if __name__ == "__main__":
    main()
