#### Write a stored procedure to retrieve all employees from the employees table based on department.

```sql

    DELIMITER //

    create procedure GetEmployeeByDepartments(in dep_id int)
    begin
        select emp_id, emp_name,employee_salary,departments_id
        from employee
        where dep_id = dep_id;
    end//
    DELIMITER //

    


    