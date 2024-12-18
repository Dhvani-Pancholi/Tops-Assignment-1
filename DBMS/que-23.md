#### How can you add, modify, and drop columns from a table using ALTER?

##### 1. Add a Column
- To add a new column to a table, you use the ADD COLUMN clause.

```sql
ALTER TABLE table_name
ADD COLUMN column_name datatype;
```
##### 2. Modify a Column
- The MODIFY is used to modify the definition of an existing column, such as changing its data type or size.
```sql
ALTER TABLE table_name
MODIFY COLUMN column_name new_datatype;
```
##### 3. Drop a Column
To remove an existing column from a table, use the DROP COLUMN clause.

```sql
ALTER TABLE table_name
DROP COLUMN column_name;
```