#### What is the purpose of the COMMIT and ROLLBACK commands in SQL?

1.COMMIT

The COMMIT command is used to finalize a transaction by saving all changes made during that transaction to the database. It ensures that any modifications to the database, such as inserts, updates, or deletes, are permanently stored.

###### Syntax :

Following is the syntax to execute the COMMIT command 

```sql
COMMIT;
```

2.ROLLBACK

The ROLLBACK command is a transactional command used to undo changes made in a transaction that have not been saved to the database. 

###### Syntax :

Following is the syntax for ROLLBACK command 

```sql
ROLLBACK;
```