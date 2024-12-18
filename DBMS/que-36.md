#### Explain the use of the ORDER BY and WHERE clauses in SQL queries

##### ORDER BY Clause
- The ORDER BY clause sorts the rows in the result set based on one or more columns, either in ascending (ASC) or descending (DESC) order. By default, the sorting is ascending.

Example:

```sql
SELECT * 
FROM employees
ORDER BY salary DESC, name ASC;
```

##### WHERE Clause
- The WHERE clause is used to filter rows based on specific conditions. 

Example:

```sql
SELECT * FROM employees
WHERE department = 'Sales' AND salary > 50000;
```