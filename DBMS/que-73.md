#### What are control structures in PL/SQL? Explain the IF-THEN and LOOP controlstructures.

Control structures in PL/SQL (Procedural Language/Structured Query Language) are used to control the flow of execution of a program. 
They allow the programmer to specify conditional logic, loops, and branching in order to make decisions, repeat actions, or handle exceptions. The main types of control structures in PL/SQL include:

- Conditional Control Structures:
- Looping Control Structures: 

######  IF-THEN Control Structure

The IF-THEN structure is used to perform conditional branching. Based on the evaluation of a condition (expression), certain blocks of code are executed.

###### Example :

```sql
DECLARE
num INT := 70000;
BEGIN
    IF salary > 50000 THEN
        DBMS_OUTPUT.PUT_LINE('High Salary');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Average Salary');
    END IF;
END;
```


###### LOOP Control Structure

The LOOP control structure allows you to repeat a block of code. PL/SQL supports several types of loops:

1.Simple Loop:
Repeats the block until explicitly exited with the EXIT statement.

2.WHILE Loop:
Repeats the block as long as a condition is TRUE.

3.FOR Loop:
Executes the block a specific number of times, iterating through a range.

###### Example of simple loop 

```plsql
DECLARE
    counter NUMBER := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE('Counter: ' || counter);
        counter := counter + 1;

        EXIT WHEN counter > 3;
    END LOOP;
END;
```

###### Example of for loop 

```plsql
BEGIN
    FOR i IN 1..3 LOOP
        DBMS_OUTPUT.PUT_LINE('Counter: ' || i);
    END LOOP;
END;
```

###### Example of while loop

```plsql
DECLARE
    counter NUMBER := 1;
BEGIN
    WHILE counter <= 3 LOOP
        DBMS_OUTPUT.PUT_LINE('Counter: ' || counter);
        counter := counter + 1;
    END LOOP;
END;
```