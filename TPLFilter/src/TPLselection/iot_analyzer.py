import json

input_file_path = "../jsondata/cpp_repos.json"
output_file_path = "../jsondata/cpp_repos.json"

# Read the JSON file
with open(input_file_path, "r", encoding="utf-8") as json_file:
    json_data = json.load(json_file)

# Process the data
for item in json_data:
    for key, value in item.items():
        if isinstance(value, str):
            # Replace double and single quotes with spaces
            item[key] = value.replace("\"", " ").replace("\'", " ")

# Write the processed data to a new file
with open(output_file_path, "w", encoding="utf-8") as json_file:
    json.dump(json_data, json_file, ensure_ascii=False, indent=4)

# If you want to see the data in the console, print it here
print(json.dumps(json_data, ensure_ascii=False, indent=4))
