#### Insert additional rows, then use ROLLBACK to undo the last insert operation

```sql
START TRANSACTION;
INSERT INTO courses (course_id,course_name,course_duration)
VALUES(101,"python",5),
(102, "java",6),
    
ROLLBACK;
```