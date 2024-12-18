#### What is a stored procedure in SQL, and how does it differ from a standard SQL query?

###### SQL Stored Procedures :

- A stored procedure is a prepared SQL code that you can save, so the code can be reused over and over again.

- Stored procedures allow for code that is used repeatedly to be saved on the database and run from there, rather than from the client. This provides a more modular approach to database design.


###### Syntax :

```sql
CREATE PROCEDURE procedure_name
(parameter1 data_type, parameter2 data_type, …)
AS
BEGIN
 -- SQL statements to be executed
END
```
Difference :

Aspect | Store Procedure |Standard SQL Query|
|-----|-------|------|
Purpose|Encapsulates logic for reuse and simplifies complex tasks.|exutes a specific query or operation.|
Execution|Called using EXEC or CALL statements.|Directly executed by the database.|
|Reusability|Can be reused multiple times with different parameters.|Typically written and executed once.|
Performance|Precompiled and optimized; faster for repeated use.|Parsed and optimized every time it runs.
