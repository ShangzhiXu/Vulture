import json
import os

# read each parse_commit.json file use os.walk
for root, dirs, files in os.walk("product_CVE_patches"):
    for file in files:
        if file.endswith('.json'):
            with open(os.path.join(root, file), 'r') as f:
                data = json.load(f)

                # Extract the patch from the modified file
                modified_file_number = 0
                while  'modified_file_' + str(modified_file_number) in data:
                    patch = data['modified_file_' + str(modified_file_number)]['patch']
                    modified_file_name = data['modified_file_' + str(modified_file_number)]['mod_filename']
                    patch = modified_file_name + "\n" + patch
                    modified_file_name = modified_file_name.split('/')[-1].replace(".", "_")
                    # Print the patch or process it as needed
                    print(root)
                    print(patch)

                    with open(root + "/" + modified_file_name + ".diff", 'w') as patch_file:
                        try:
                            patch_file.write(patch)
                        except:
                            print("Error writing patch file")
                    modified_file_number += 1



