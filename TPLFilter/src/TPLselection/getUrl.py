import os

def extract_url_from_file(filename):
  """
  Extracts the URL corresponding to "natmap" from the given file and returns it.

  Args:
    filename: The path to the input file.

  Returns:
    The extracted URL if found, None otherwise.
  """

  with open(filename, 'r') as f:
    in_package_block = False
    for line in f:
      # Check if we're within the "Package/natmap" block
      if line.startswith("define Package/natmap"):
        in_package_block = True
      elif line.startswith("endef"):
        in_package_block = False

      # Extract the URL if we're in the block and encountering the URL line
      if in_package_block and line.startswith("URL:="):
        url = line.split(":=")[1].strip()
        return url

  return None

def traverse_and_extract(directory, output_file):
  """
  Traverses all files in a directory and extracts URLs, writing them to the output file.

  Args:
    directory: The root directory to traverse.
    output_file: The path to write the extracted URLs.
  """

  with open(output_file, 'w') as out:
    for root, _, filenames in os.walk(directory):
      for filename in filenames:
        filepath = os.path.join(root, filename)
        url = extract_url_from_file(filepath)
        if url:
          out.write(url + "\n")

# Example usage
current_dir = os.getcwd()
output_file = "../urlList"
traverse_and_extract(current_dir, output_file)
print(f"Extracted URLs written to {output_file}")
