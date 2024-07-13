import re
import json
import os
special = ["deprecated", "out of date", "outdated", "out-of-date", "no longer", "anymore"]
# keywords of IOT projects
iot = ["firmware", "iot", "internet of things", "embedded", "aiot", "internet-of-things", "internetofthings","internet of things"
       "rtmp", "real time","raspberry pi", "arduino", "real-time", "MQTT", "TizenRT", "firmwares", "Home Assistant",
       "smart home", "virtual reality",
       "augmented reality", "VR", "AR", "Oculus", "HTC Vive", "MIoT", "Edge Computing", "Edge-Computing",
       "Bluetooth Low Energy", "BLE", "sensor networks",
       "Zigbee", "LoRa", "NFC", "RFID", "smart city", "IIoT", "wearables", "ESP32", "ESP8266", "smart agriculture",
       "IoT healthcare", "CoAP", "WebSocket",
       "NodeMCU", "MicroPython", "Z-Wave", "Sigfox", "GSM", "GPRS", "LoRaWAN", "Wi-Fi Module", "Bluetooth Module",
       "NRF24L01", "RF module", "RFID Module",
       "STM32", "PIC microcontroller", "AVR microcontroller", "ARM microcontroller", 'gateway devices',
       'Raspberry Pi Zero', 'BeagleBone', 'Arduino Yun',
       'Arduino Mega', 'development kits', 'Particle Photon', 'Particle Electron', 'Adafruit IO', 'Blynk',
       'ThingSpeak', 'AWS', 'Azure Hub',
       'Google Core', 'cybersecurity', 'data management', 'network protocols', 'frameworks', 'operating systems',
       'data analytics',
       'edge devices', 'environmental monitoring', 'healthcare devices', 'smart home devices',
       'industrial automation', 'smart cities',
       'logistics', 'retail solutions', 'energy management', 'water management', 'automation',
       'real-time monitoring',
       'wireless technologies', 'scalability', 'energy efficiency', 'connectivity solutions',
       "SoC (System on Chip)", "Thread protocol", "IPv6 over Low-Power Wireless Personal Area Networks (6LoWPAN)",
       "Bluetooth", "Ultra-Wideband", "UWB", "Real-Time Operating System", "RTOS", "Zephyr", "FreeRTOS", "Contiki",
       "RIOT", "Mbed", "Energy harvesting technologies",
       "Narrowband", "Cellular LPWA", "TR-50", "AMQP", "Global Navigation Satellite System", "GNSS",
       "Quality of Service", "QoS", "Mesh Network", "Telematics",
       "TensorFlow Lite", "Keras", "PyTorch", "MXNet", "OpenCV", "Robot Operating System", "ROS", "LiDAR",
       "UWB technology", "ultrasonic sensors",
       "infrared sensors", "environmental sensors", "bio-sensing", "wearable tech", "smart textiles",
       "energy harvesting", "wireless charging", "solar powered devices",
       "quantum computing", "5G technology", "NB-IoT",
       "CAT-M1", "LPWAN", "eSIM technology", "SoC",
       "System on Chip", "SBC", "Single Board Computer",
       "indoor positioning", "geofencing", "GPS modules",
       "security protocols", "blockchain applications",
       "smart grids", "utility monitoring", "precision farming",
       "aquaculture technology", "supply chain management",
       "predictive maintenance", "asset tracking", "fleet management",
       "industrial sensors", "data dashboards", "data visualization",
       "cloud integration", "serverless architecture", "APIs",
       "cross-platform development", "testing methods",
       "standards compliance", "certifications", "regulations",
       "human-machine interface", "HMI", "augmented workers",
       "robotic process automation", "RPA", "digital twins",
       "simulation techniques", "modeling tools", "project management"]

# keywords of Non-IOT projects by tags
hpc = ["HPC", "supercomputing", "parallel computing", "CUDA", "OpenMP", "MPI", "grid computing",
       "distributed computing", "high performance computing"]
ml = ["machine learning", "deep learning", "neural network", "artificial intelligence", "AI", "ML", "DL", "NN",
      "tensorflow", "pytorch", "keras",
      "scikit-learn", "scikit", "sklearn", "caffe", "theano", "mxnet", "torch", "torchvision", "torchtext",
      "fastai",
      "cntk", "chainer", "paddlepaddle", "paddle", "xgboost", "lightgbm", "catboost", "mlpack", "ml.net", "mllib",
      "spark mllib", "sparkml", "spark ml"]
games = ["game", "games", "graphics", "3D", "2D", "OpenGL", "DirectX", "Vulkan", "Unity", "Unreal", "CryEngine",
         "Crytek", "game engine", "game development", "3D rendering",
         "OpenGL", "DirectX", "Unity", "Unreal Engine", "graphics engine"]
vr = []
desktopApplication = ["desktop application", "GUI", "Qt", "wxWidgets", "Windows API", "macOS development",
                      "Linux desktop", "desktop development", "desktop app",
                      "desktop software", "desktop applications", "desktop apps", "desktop softwares"]
webDevelopment = ["web development", "web developments", "web app", "web apps", "web application",
                  "web applications", "web server", "web servers", "web framework",
                  "web frameworks", "web service", "web services", "web dev", "web devs", "web programming",
                  "web design",
                  "web developer", "web developers", "web designer", "web designers"]
bio = ["bioinformatics", "bioinformatic", "biology", "genomics", "molecular modeling", "computational chemistry",
       "scientific simulation"]
db = ["database", "SQL", "MySQL", "PostgreSQL", "Apache", "Nginx", "MongoDB", "Redis", "SQLite", "MariaDB", "NoSQL"]

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

# Regular expression to match Chinese characters
chinese_char_regex = re.compile(r'[\u4e00-\u9fff]+')

def word_exists(text, word):
    pattern = r'\b' + re.escape(word) + r'\b'
    return re.search(pattern, text) is not None

# Function to write JSON data to a file in the specified directory
def write_json_file(directory, file_name, data):
    # Create the directory if it doesn't exist
    if not os.path.exists(directory):
        os.makedirs(directory)
    file_path = os.path.join(directory, file_name)
    with open(file_path, 'w') as file:
        json.dump(data, file, indent=4)
    print(f"Repos are filtered into the file: {file_path}")

def tag_handle(data, tags_keywords, mustIOTrepos, potentialIOTRepos, chineseRepos,  nonIOTRepos, specialRepos):
    temp_data = []
    iot_count = 0
    nonIOT_count = 0
    special_count = 0
    chinese_count = 0
    for repo in data:
        if not repo.keys().__contains__("repo_topics"):
            temp_data.append(repo)
            continue
        else:
            repo_topics = ""
            for topic in repo["repo_topics"]:
                repo_topics += topic + " "
            repo_topics = repo_topics.lower()
            # collect IOT repos
            is_Iot = False
            for keyword in iot:
                # exact match words exisiting in the description
                target = keyword.lower()
                if word_exists(repo_topics, target):
                    is_Iot = True
                    mustIOTrepos.append(repo)
                    break
            if is_Iot:
                iot_count += 1
                continue

            # collect special repos
            isSpecial = False
            for keyword in special:
                # exact match words exisiting in the description
                target = keyword.lower()
                if word_exists(repo_topics, target):
                    isSpecial = True
                    specialRepos.append(repo)
                    break
            if isSpecial:
                special_count += 1
                continue


            # collect Chinese repos
            if chinese_char_regex.search(repo_topics) is not None:
                chineseRepos.append(repo)
                chinese_count += 1
                continue

            # collect obviously non iot related libraries and classify them\
            # Check for non-IOT keywords
            containsKeyword = False
            for tag, keywords in tags_keywords.items():
                for keyword in keywords:
                    if word_exists(repo_topics, keyword.lower()):
                        containsKeyword = True
                        nonIOTRepos.append(repo)
                        break
                if containsKeyword:
                    break
            if containsKeyword:
                nonIOT_count += 1
                continue
            temp_data.append(repo)
    print("temp_data", temp_data.__len__())
    print("data", data.__len__())
    print("Among them, ", iot_count, "are IOT repos," , nonIOT_count, "are nonIOT repos,", special_count, "are special repos,", chinese_count, "are Chinese repos.")
    print("so in total, ", iot_count + nonIOT_count + special_count + chinese_count, "repos are filtered.")
    return temp_data

def name_and_description_handle(data, tags_keywords, mustIOTrepos, potentialIOTRepos, chineseRepos,  nonIOTRepos, specialRepos):
    iot_count = 0
    nonIOT_count = 0
    special_count = 0
    chinese_count = 0
    for repo in data:
        # if repo['full_name'] != "sysprogs/PicoHTTPServer":
        #     continue
        isIOT = False
        containsKeyword = False
        isSpecial = False
        if repo["repo_description"] is None:
            description = repo["full_name"].lower()
        else:
            description = repo["repo_description"].lower() + " " + repo["full_name"].lower()
        description = description.replace("-", " ")
        description = description.lower()

        # collect IOT repos
        for keyword in iot:
            # exact match words exisiting in the description
            target = keyword.lower()
            if word_exists(description, target):
                isIOT = True
                mustIOTrepos.append(repo)
                iot_count += 1
                break
        # it is highly likely an IOT repo, so no more filtering
        if isIOT:
            continue

        # collect special repos
        for keyword in special:
            # exact match words exisiting in the description
            target = keyword.lower()
            if word_exists(description, target):
                isSpecial = True
                specialRepos.append(repo)
                special_count += 1
                break
        if isSpecial:
            continue


        # collect Chinese repos
        is_chinese = False
        if chinese_char_regex.search(description) is not None:
            chineseRepos.append(repo)
            chinese_count += 1
            is_chinese = True
            continue

        # collect obviously non iot related libraries and classify them\
        # Check for non-IOT keywords
        for tag, keywords in tags_keywords.items():
            for keyword in keywords:
                if word_exists(description, keyword.lower()):
                    containsKeyword = True
                    nonIOTRepos.append(repo)
                    nonIOT_count += 1
                    break
            if containsKeyword:
                break

        # collect potential IOT repos, which does not contain any keyword of IOT and nonIOT
        if not containsKeyword and not isIOT and not isSpecial and not is_chinese:
            potentialIOTRepos.append(repo)

    print("Among them, ", iot_count, "are IOT repos,", nonIOT_count, "are nonIOT repos,", special_count, "are special repos,", chinese_count, "are Chinese repos. ", potentialIOTRepos.__len__(), "are potential IOT repos.")
    print("so in total, ", iot_count + nonIOT_count + special_count + chinese_count + potentialIOTRepos.__len__(), "repos are filtered.")
def extract_libraries(name):

    # Create a dictionary mapping tags to their keyword lists
    tags_keywords = {
        "hpc": hpc,
        "ml": ml,
        "games": games,
        "desktopApplication": desktopApplication,
        "webDevelopment": webDevelopment,
        "bio": bio,
        "vr": vr,
        "db": db,
        "other": other,
        "other2": other2
    }

    tags_count = {tag: 0 for tag in tags_keywords.keys()}

    # Initialize a nested dictionary to count each keyword frequency by tag
    keyword_count_IOT = {keyword: 0 for keyword in iot}
    keyword_count_by_tag = {tag: {keyword: 0 for keyword in keywords} for tag, keywords in tags_keywords.items()}

    # Initialize a dictionary to count special keywords
    keyword_count_special = {keyword: 0 for keyword in special}
    
    
    input_file = name + '.json'  # The file containing the list of repos
    #input_file = "cpp_iot.json"
    with open(input_file, "r", encoding="utf8") as json_file:
        json_data = json_file.read()
    # Load the JSON data
    data = json.loads(json_data)
    datalen = data.__len__()

    mustIOTrepos = []

    potentialIOTRepos = []

    chineseRepos = []

    nonIOTRepos = []

    specialRepos = []
    # handle the tags
    data = tag_handle(data, tags_keywords, mustIOTrepos, potentialIOTRepos, chineseRepos,  nonIOTRepos, specialRepos)

    # handle the description and name
    name_and_description_handle(data, tags_keywords, mustIOTrepos, potentialIOTRepos, chineseRepos,  nonIOTRepos, specialRepos)

    specialReposName = name + '_specialRepos.json'
    mustIOTReposName = name + '_mustIOTRepos.json'
    potentialIOTReposName = name + '_potentialIOTRepos.json'
    nonIOTReposName = name + '_nonIOTRepos.json'
    chineseReposName = name + '_ChineseRepos.json'

    # Write each list to a separate file in the specified directory
    write_json_file(".\\filterRes\\IOT", specialReposName, specialRepos)
    write_json_file(".\\filterRes\\IOT", mustIOTReposName, mustIOTrepos)
    write_json_file(".\\filterRes\\potentialIOT", potentialIOTReposName, potentialIOTRepos)
    write_json_file(".\\filterRes\\nonIOT", nonIOTReposName, nonIOTRepos)
    write_json_file(".\\filterRes\\Chinese", chineseReposName, chineseRepos)


    print("#All repos:", datalen)
    print("#IOT repos (which contain IOT keywords):", mustIOTrepos.__len__())
    print("#Potential IOT repos (which do not contain any keyword):", potentialIOTRepos.__len__())
    print("#nonIOTrepos (which contain keywords): ", nonIOTRepos.__len__())
    print("#specialRepos (which contain special keywords): ", specialRepos.__len__())
    print(f"double check: #countIOT + #PotentialIOT + #nonIOTrepos + #specialRepos == ",
            mustIOTrepos.__len__() + potentialIOTRepos.__len__() + nonIOTRepos.__len__() + specialRepos.__len__()+chineseRepos.__len__())



name = "cpp_repos"
extract_libraries(name)
