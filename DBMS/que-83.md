####  Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.
```sql
start transaction;  
  SAVEPOINT before_insert;

  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (101, 'raj', 'malhotra', 10);

  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (102, 'krupa', 'dube', 20);

  ROLLBACK TO before_insert;


```