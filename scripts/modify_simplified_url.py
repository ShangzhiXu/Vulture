def convert_and_check_urls(lines):
  """
  Converts lines in a custom format to valid GitHub URLs and attempts git clone.

  Args:
    lines: A list of strings in the format "user@@repo".

  Returns:
    None. It prints results to the console.
  """
  valid_urls = []
  for line in lines:
    # Split the line by "@@"
    user, repo = line.split("@@")
    # Construct the URL
    url = f"https://github.com/{user}/{repo}"
    valid_urls.append(url)

  # Print valid URLs
  print("Valid GitHub URLs:")
  for url in valid_urls:
    print(url)

  # Replace with your desired behavior for testing (adapt previous script)
  # Example: Use the clone_and_check function from the previous script
  # for url in valid_urls:
  #   clone_and_check(url, "/path/to/clone/directory")

# Replace with your actual list
lines = [
  "kiyo-masui@@bitshuffle",
  "adafruit@@Adafruit_BluefruitLE_nRF51",
  # Include more lines here...
]

convert_and_check_urls(lines)
