##### What is a cursor in PL/SQL? Explain the difference between implicit and explicit cursors.

- A cursor in PL/SQL is a pointer that allows you to retrieve data one row at a time from the result set of a query. Cursors are essential for handling query results that return multiple rows, enabling row-by-row processing. 
There are two types of cursors in PL/SQL: 
- implicit cursors
- explicit cursors.

| Implicit Cursors | Explicit Cursors |
| --------- | ---------- |
|Implicit cursors are automatically created when select statements are executed.|Explicit cursors needs to be defined explicitly by the user by providing a name.|
|Explicit cursors needs to be defined explicitly by the user by providing a name.|Explicit cursors can fetch multiple rows.|
|Closes automatically after execution.|Need to close after execution.|
|They are more vulnerable to errors such as Data errors, etc.|They are less vulnerable to errors(Data errors etc.)|