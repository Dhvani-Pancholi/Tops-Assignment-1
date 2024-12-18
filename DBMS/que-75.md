####  Write a PL/SQL block using an IF-THEN condition to check the department of an employee.

```sql
DECLARE
  employee_id NUMBER := 106;
  emp_department VARCHAR2(50);
BEGIN
  SELECT department_name INTO emp_department
  FROM employees
  WHERE employee_id = employee_id;

  IF emp_department = 'Accounting' THEN
    DBMS_OUTPUT.PUT_LINE('The employee works in the Accounting department.');
  ELSIF emp_department = 'HR' THEN
    DBMS_OUTPUT.PUT_LINE('The employee works in the HR department.');
  ELSE
    DBMS_OUTPUT.PUT_LINE('The employee works in another department.');
  END IF;
END;
/

```