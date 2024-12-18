#### Create a trigger to update the last_modified timestamp whenever an employee record is updated.

```sql
CREATE TRIGGER addEmpLog
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = NOW();
END;

```