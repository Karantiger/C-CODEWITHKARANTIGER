 create database college;
 USE college;
 
 create table Studentinfo 
 (Id INT PRIMARY KEY, 
 Name VArchar(50), 
 Age INT NOT NULL);
   
   create table Student(
   Id int primary key,
   name varchar(50)
   );
   
   
 insert into Student(Id, name) values(1, "Vikash"),(2, "Vishal");
   
 INSERT INTO Studentinfo VALUES(1, "KARAN", 20);
 INSERT INTO Studentinfo VALUES(2, "TIGER", 22);
 
 SELECT * FROM Studentinfo;
 select * from Student;
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 