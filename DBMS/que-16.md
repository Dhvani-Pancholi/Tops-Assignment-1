#### Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.

```sql
ALTER TABLE student ADD FOREIGN KEY (teacher_id) REFERENCES teacher(teacher_id);
```

