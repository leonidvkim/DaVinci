import sqlite3
import csv

conn = sqlite3.connect('roster.db')
cursor = conn.cursor()

#with open('students.csv', 'r') as file:
#    reader = csv.DictReader(file)
#    next(reader)
#    for row in reader:
#        cursor.execute("INSERT INTO student (id, student_name) VALUES (?, ?)", (row['id'], row['student_name']))

#with open('students.csv', 'r') as file:
#    reader = csv.DictReader(file)
#    next(reader)
#    for row in reader:
#        cursor.execute("INSERT INTO house (house, head) VALUES (?, ?)", (row['house'], row['head']))

with open('students.csv', 'r') as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        cursor.execute("INSERT INTO st_house (id, house) VALUES (?, ?)", (row['id'], row['house']))

conn.commit()
conn.close()