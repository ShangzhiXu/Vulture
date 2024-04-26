import os
import shutil


def extract_and_split_makefiles(root_dir, destination_dir):
    """
    Extracts all Makefile paths in a project, splits them by "/", and creates new filenames.

    Args:
      root_dir: The root directory of the project to search.
      destination_dir: The directory to store the copied Makefiles.

    Returns:
      A list of tuples, where each tuple contains the original Makefile path and its new filename.
    """

    makefiles = []
    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename == "Makefile":
                full_path = os.path.join(dirpath, filename)
                split_path = full_path.split("/")
                new_filename = split_path[-2] + "_Makefile"
                makefiles.append((full_path, new_filename))

                with open(full_path, "r") as file:
                    makefile_content = file.read()
                    for line in makefile_content.split("\n"):
                       if "PKG_URL" in line and "github" in line:
                            print(line.split("=")[-1].strip())

    return makefiles


# Example usage
root_dir = "../FirstPartExperiment/RIOT/pkg"  # Change this to your actual project directory
destination_dir = "./makefiles"  # Change this to your desired destination

makefiles = extract_and_split_makefiles(root_dir, destination_dir)

# for full_path, new_filename in makefiles:
#     print(f"Copied {full_path} to {new_filename}")
