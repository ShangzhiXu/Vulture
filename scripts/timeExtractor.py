import pandas as pd

# Your input data
data = ""
with open("../anything1", "r") as f:
    data = f.read()


# Splitting the input into lines, then splitting each line into name and value
lines = data.strip().split('\n')
map = {}
for line in lines:
    print(line.split(" : ")[0], line.split(" : ")[1])
    map[line.split(" : ")[0]] = float(line.split(" : ")[1])


# Creating a DataFrame
df = pd.DataFrame({
    "Name": list(map.keys()),
    "Value": list(map.values())
})

# Save the DataFrame to an Excel file
excel_filename = '../split_data_iotlist.xlsx'
df.to_excel(excel_filename, index=False)

excel_filename
