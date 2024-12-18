#### What is the role of NOT NULL and UNIQUE constraints?

##### NOT NULL Constraints :

The NOT NULL constraint enforces a column to not accept null values, ensuring that a column always has a value.

###### Example

```sql

CREATE TABLE Students (
    StudentID int PRIMARY KEY,
    StudentName varchar(50) NOT NULL,
    Age int NOT NULL
);
```

##### UNIQUE Constraints :

The UNIQUE constraint ensures that all values in a column are different. 

###### Example
```sql
ALTER TABLE Orders
ADD UNIQUE (OrderNumber);
```