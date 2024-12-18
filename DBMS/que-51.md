##### Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments

```sql
CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(50)
);
```
```sql
CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(50),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);
```
```sql
INSERT INTO departments (department_id, department_name)
VALUES
(1, 'Human Resources'),
(2, 'Finance'),
(3, 'Accounting'),
(4, 'Marketing');
```

```sql
INSERT INTO employees (employee_id, employee_name, department_id,salary)
VALUES
(101, 'raj', 1,10000),
(102, 'prit', 3,20000),
(103, 'deepu', 2,60000),
(104, 'devika', 4,70000),
(105, 'eva', NULL,90000); 
```

```sql
SELECT 
    employees.employee_name,
    departments.department_name
FROM 
    employees
INNER JOIN 
    departments ON employees.department_id = departments.department_id;

```