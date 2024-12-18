#### Use a FOR LOOP to iterate through employee records and display their names.

```sql
DECLARE
  CURSOR emp_cursor IS
    SELECT first_name, last_name FROM employees;
BEGIN
  FOR emp_record IN emp_cursor LOOP
    DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_record.first_name || ' ' || emp_record.last_name);
  END LOOP;
END;

```