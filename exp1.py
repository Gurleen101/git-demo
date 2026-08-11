
import pandas as pd
data={
"Name": ["Aman", "Priya", "Rahul", "Sneha","Deepa", "Gargi", "Rajat", "Yash","Harsh", "Karan", "Jass", "Sujit","Arohi", "Reena", "Rachit", "Snehlata"],
  
}

df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)





import pandas as pd

df_csv = pd.read_csv("students.csv")


print("First 10 rows of CSV file:")
print(df_csv.head(10))



df_excel = pd.read_excel("students.xlsx")


print("\nFirst 10 rows of Excel file:")
print(df_excel.head(10))



df_txt = pd.read_csv("students.txt", sep="\t")


print("\nFirst 10 rows of TXT file:")
print(df_txt.head(10))
