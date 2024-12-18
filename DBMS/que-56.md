#### Use the AVG aggregate function to find the average salary of employees in each department.

```sql
select department_id, AVG(salary) as average_salary
from employees;
```