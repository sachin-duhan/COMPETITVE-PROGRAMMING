import math
import pandas as pd
# location of the file!!
data = pd.read_csv("/home/sachin/Desktop/data.csv")

age = "age"
marks = "marks"

student_records = []
for val in data[age]:
    student_records.append([val])
for i,mark in enumerate(data[marks]):
    student_records[i].append(mark)

base_marks = 75
base_age = 20
euclidian_distance = []
for student in student_records:
    distance = math.sqrt((base_age-student[0])**2+(base_marks-student[1])**2) # for finding total euclicidan distance!
    # un-comment to see the result!!
    # distance = math.sqrt((base_age-student[0])**2) # for finding age ka euclicidan distance!
    # distance = math.sqrt((base_marks-student[1])**2) # for finding age ka euclicidan distance!
    euclidian_distance.append(distance)

max1 = max(euclidian_distance)
print(max1)