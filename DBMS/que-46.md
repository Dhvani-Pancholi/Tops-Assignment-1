#### Insert a few rows into the courses table and use COMMIT to save the changes

```sql
START TRANSACTION;
 INSERT INTO courses (course_id,course_name,course_duration)
 VALUES
 (3, 'c',3),
 (5, 'c++', 3),
 (8, 'java',10);
 (6, 'Android', 6),
 (7, 'php', 5),

 COMMIT;
```