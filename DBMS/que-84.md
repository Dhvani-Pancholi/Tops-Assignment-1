####  Commit part of a transaction after using a savepoint and then rollback the remaining changes

```sql
start transaction;
  SAVEPOINT before_insert;

  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (103, 'viraj', 'shah', 30);

  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (104, 'babita', 'iyer', 40);
  COMMIT;

  SAVEPOINT after_first_commit;
  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (105, 'jetha', 'gada', 50);

  INSERT INTO employees (employee_id, first_name, last_name, department_id)
  VALUES (106, 'bhide', 'pandit', 60);
  ROLLBACK TO after_first_commit;
```
