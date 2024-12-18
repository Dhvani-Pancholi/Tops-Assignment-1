#### What is the purpose of GRANT and REVOKE in SQL?

###### 1. Grant : 
- SQL Grant command is specifically used to provide privileges to database objects for a user. This command also allows users to grant permissions to other users too. 

<b>Syntax:</b> 

```sql
    grant privilege_name on object_name to user;
```

###### 2. REVOKE :
- The REVOKE statement is used to remove previously granted privileges from users or roles. This can be done if the user no longer needs access to specific database objects or actions.

Syntax:

```sql
    REVOKE privilege_type ON object FROM user;
```

