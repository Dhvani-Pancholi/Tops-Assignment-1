####  Use a LEFT JOIN to show all departments, even those without employees.

```sql
SELECT 
    departments.department_id,
    departments.department_name
FROM 
    departments
LEFT JOIN 
    employees ON departments.department_id = employees.department_id;
```