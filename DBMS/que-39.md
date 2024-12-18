#### Limit the results of the SELECT query to show only the top two courses using LIMIT.

```sql
select * from courses ORDER BY course_duration DESC limit 2;
```