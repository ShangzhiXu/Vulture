import json
import os
import re

# JSON data
json_data = ""
cve_with_overflow = []
dic_path = "C:\\Users\\mxu49\\Downloads\\cvelistV5-main\\cvelistV5-main\\cves"
#shangzhi 1.6 deleted firmware
iot = ["iot", "internet of things", "embedded", "aiot", "internet-of-things", "internetofthings","internet of things"
       "rtmp", "real time"
               "raspberry pi", "arduino", "real-time", "MQTT", "TizenRT", "Home Assistant",
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
       'ThingSpeak', 'AWS', 'Azure',
       'Google Core', 'cybersecurity', 'data management', 'network protocols', 'frameworks',
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
          "High bandwidth consumption", "Lacks encryption support", "embedded systems",
          "Incompatible with real-time processing", "Limited scalability",
          "No low-power mode", "Non-modular architecture", "Lacks support for wireless protocols",
          "Dependent on high-end hardware", "No support for intermittent connectivity"]

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

def word_exists(text, word):
    pattern = r'\b' + re.escape(word) + r'\b'
    return re.search(pattern, text) is not None

# walk through the directory
for root, dirs, files in os.walk(dic_path):
    for file in files:
        #if not file == "CVE-2022-40280.json":
            #continue
        with open(os.path.join(root, file), "r") as json_file:
            try:
                #print("File:", file)
                data = json.load(json_file)
                is_iot = True
                #print("\nProblem Types:")
                for description in data["containers"]["cna"]["descriptions"]:
                    # see if any keywords in iot list is in the description
                    for i in iot:
                        if word_exists(description["value"].lower(), i.lower()):
                            is_overflow = True
                            # Extract and print information
                            id = data["cveMetadata"]["cveId"]
                            des = []
                            for description in data["containers"]["cna"]["descriptions"]:
                                des.append(description["value"])
                            ref = []
                            for reference in data["containers"]["cna"]["references"]:
                                ref.append(reference)
                            cve_with_overflow.append({"id": id, "des": des, "ref": ref, "desc": description["value"],"keyword": i})
                            print("CVE ID:", id, ' keyword:', i)
                            print("Description:", des)

                            break

            except Exception as e:
                #print("Error:", e)
                #print("\n")
                continue
# reverse the cve_with_overflow list
cve_with_overflow.reverse()
with open("../jsondata/cve_with_iot.json", "w") as json_file:
    json.dump(cve_with_overflow, json_file, indent=4)
