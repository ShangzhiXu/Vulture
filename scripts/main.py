import json
import os
# JSON data
json_data = ""
cve_with_overflow = []
dic_path = "C:\\Users\\mxu49\\Downloads\\cvelistV5-main\\cvelistV5-main\\cves"
# walk through the directory
for root, dirs, files in os.walk(dic_path):
    for file in files:
        #if not file == "CVE-2023-43787.json":
            #continue
        with open(os.path.join(root, file), "r") as json_file:
            try:
                #print("File:", file)
                data = json.load(json_file)
                is_overflow = False
                #print("\nProblem Types:")
                for problemType in data["containers"]["cna"]["problemTypes"]:
                    for desc in problemType["descriptions"]:
                        if desc["description"].lower().count("overflow") > 0:
                            if desc["description"].lower().count("integer") <= 0:
                                is_overflow = True
                                # Extract and print information
                                id = data["cveMetadata"]["cveId"]
                                des = []
                                for description in data["containers"]["cna"]["descriptions"]:
                                    des.append(description["value"])
                                if des[0].lower().count("integer") > 0 or desc["description"].lower().count("integer")  > 0:
                                    continue
                                ref = []
                                for reference in data["containers"]["cna"]["references"]:
                                    ref.append(reference)
                                cve_with_overflow.append(
                                    {"id": id, "des": des, "ref": ref, "desc": desc["description"]})
                                print("CVE ID:", id)
                                print("problem type:", des)
                if is_overflow:
                    continue
                for description in data["containers"]["cna"]["descriptions"]:
                    if description["value"].lower().count("overflow") > 0:
                        if description["value"].lower().count("integer") <= 0:
                            is_overflow = True
                            # Extract and print information
                            id = data["cveMetadata"]["cveId"]
                            des = []
                            for description in data["containers"]["cna"]["descriptions"]:
                                des.append(description["value"])
                            if des[0].lower().count("integer") > 0 or desc["description"].lower().count("integer")  > 0:
                                continue
                            ref = []
                            for reference in data["containers"]["cna"]["references"]:
                                ref.append(reference)
                            cve_with_overflow.append({"id": id, "des": des, "ref": ref, "desc": desc["description"]})
                            print("CVE ID:", id)
                            print("Description:", des)

            except Exception as e:
                #print("Error:", e)
                #print("\n")
                continue
# reverse the cve_with_overflow list
cve_with_overflow.reverse()
with open("../jsondata/cve_with_overflow.json", "w") as json_file:
    json.dump(cve_with_overflow, json_file, indent=4)
