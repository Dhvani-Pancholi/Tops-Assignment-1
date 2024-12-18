#### Modify the view to exclude employees whose salaries are below $50,000.

```sql
    create view EmployeeDepartmentView as
    select e.employee_id, e.employee_name, d.department_name, e.salary
    from employees e
    inner join departments d on e.department_id = d.department_id
    where e.salary >= 50000;
```