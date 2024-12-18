#### Explain the concept of JOIN in SQL. What is the difference between INNER JOIN, LEFT JOIN, RIGHT JOIN, and FULL OUTER JOIN?

JOIN is used to combine rows from two or more tables based on a related column between them. 

1.INNER JOIN

Returns only the rows where there is a match in both tables.

##### Syntax:
```sql
SELECT columns
FROM table1
INNER JOIN table2
ON table1.column_name = table2.column_name;
```

2.LEFT JOIN 

Returns all the rows from the left table and the matching rows from the right table.

##### Syntax:
```sql
SELECT columns
FROM table1
LEFT JOIN table2
ON table1.column_name = table2.column_name;
```

3.RIGHT JOIN

Returns all rows from the right table and the matching rows from the left table.

##### Syntax:
```sql
SELECT columns
FROM table1
RIGHT JOIN table2
ON table1.column_name = table2.column_name;
```

4.FULL OUTER JOIN

Returns all rows from both tables, with NULL in the columns where there are no matches.

##### Syntax:
```sql
SELECT columns
FROM table1
FULL OUTER JOIN table2
ON table1.column_name = table2.column_name;
```