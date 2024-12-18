#### Create a view to show all employees along with their department names.

```sql
 create view EmployeeDepartmentView AS
 select e.employee_id, e.employee_name, d.department_name
 from employees e
 inner join departments d on e.department_id = d.department_id;
```