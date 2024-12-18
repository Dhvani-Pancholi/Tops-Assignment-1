#### Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes

```sql
start transaction;
savepoint before_id_update;
update  courses set sid=11 where course_name="java";

rollback to savepoint before_id_update;
```