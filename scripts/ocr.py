from PIL import Image
import easyocr
reader = easyocr.Reader(['en'])
# Load the image from file
img_path = "C:\\Users\\mxu49\\Downloads\\keywords.png"

# Read the text from the image
results = reader.readtext(img_path)
word_list = []
# Process the results
for result in results:
    # Each result has the format [bounding box, text, confidence]
    bbox, text, confidence = result
    word_list.append(text)
print(word_list)

    # You can also process the text as needed, e.g., storing in a list, etc.