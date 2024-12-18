####  Create a trigger to automatically log changes to the employees table when a new employee is added.

```sql

delimiter //
create trigger addEmpLog 
before insert on employees 
for each row
begin 

insert into emplog (operation, row_affected, operation_time) values ("insert", 4, now());
end //
```