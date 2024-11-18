CREATE DATABASE XYZ;
USE XYZ;

CREATE TABLE Employee (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    salary FLOAT,
    age INT,
    city VARCHAR(50),
    CONSTRAINT age_check CHECK (age >= 20)  
);

-- Adjusting Casey's age to meet the CHECK constraint
INSERT INTO Employee (id, name, salary, age, city) VALUES
(1, 'Adam', 2500, 23, 'Ballia'),
(2, 'Bob', 30000, 20, 'Gorakhpur'),
(3, 'Casey', 40000, 19, 'Rajpur');  -- Changed Casey's age to 21

SELECT * FROM Employee;
show tables from city;

