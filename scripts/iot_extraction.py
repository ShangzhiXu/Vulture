import json
import os
# JSON data
json_data = ""
cve_with_overflow = []
dic_path = ""
# walk through the directory
for root, dirs, files in os.walk(dic_path):
    for file in files:
        with open(os.path.join(root, file), "r") as json_file:
            try:
                #print("File:", file)
                data = json.load(json_file)
                is_overflow = False
                #print("\nProblem Types:")
                for problemType in data["containers"]["cna"]["problemTypes"]:
                    for desc in problemType["descriptions"]:
                        if desc["description"].count("embed") > 0:
                            is_overflow = True
                            # Extract and print information
                            id = data["cveMetadata"]["cveId"]
                            des = []
                            for description in data["containers"]["cna"]["descriptions"]:
                                des.append(description["value"])
                            ref = []
                            for reference in data["containers"]["cna"]["references"]:
                                ref.append(reference)
                            cve_with_overflow.append({"id": id, "des": des, "ref": ref})
                            print("CVE ID:", id)
                            print("Description:", des)
                if is_overflow:
                    continue
                for description in data["containers"]["cna"]["descriptions"]:
                    if description["value"].count("embed") > 0:
                        is_overflow = True
                        # Extract and print information
                        id = data["cveMetadata"]["cveId"]
                        des = []
                        for description in data["containers"]["cna"]["descriptions"]:
                            des.append(description["value"])
                        ref = []
                        for reference in data["containers"]["cna"]["references"]:
                            ref.append(reference)
                        cve_with_overflow.append({"id": id, "des": des, "ref": ref})
                        print("CVE ID:", id)
                        print("Description:", des)

            except Exception as e:
                #print("Error:", e)
                #print("\n")
                continue
with open("../jsondata/cve_with_iot.json", "w") as json_file:
    json.dump(cve_with_overflow, json_file, indent=4)
