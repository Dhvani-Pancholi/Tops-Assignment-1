####  Group employees by department and count the number of employees in each department using GROUP BY

```sql
select department_id, count (employee_id) as employee_count
from employees
group by department_id;
```