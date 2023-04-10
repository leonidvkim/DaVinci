CREATE TABLE student(id INTEGER,  student_name TEXT, PRIMARY KEY(id));
CREATE TABLE house(house TEXT, head TEXT);
CREATE TABLE st_house(id INTEGER,  house TEXT, FOREIGN KEY(id) REFERENCES student(id));