def modify_lines(lines):
  """
  Modifies each line in the given list to the format "https://github.com/xxx/xxx".

  Args:
    lines: A list of strings representing the original lines.

  Returns:
    A list of strings with each line modified to the desired format.
  """
  modified_lines = []
  special_lines = []
  for line in lines:
    # Split the line based on "/" but keep the first "/"
    line = line.strip()
    if "$(PKG_NAME)" in line:
      continue
    parts = line.split("/")
    if len(parts) >= 5:
      print(parts)
      # Assuming the first two parts are username and repo name
      modified_line = f"https://{parts[2]}/{parts[3]}/{parts[4]}"
      modified_lines.append(modified_line)
    else:
      # Invalid line, keep it as is
      special_lines.append(line)
  return modified_lines, special_lines

# Read lines from your file
with open("../urlList", "r") as f:
  lines = f.readlines()

# Modify the lines
modified_lines,special_lines = modify_lines(lines)

# Print or write the modified lines
print("\n".join(modified_lines))  # Print to console
print("\n")
print("\n".join(special_lines))  # Print to console
# Optionally, write the modified lines to a new file
with open("../modified_urlList", "w") as f:
  f.write("\n".join(modified_lines))
