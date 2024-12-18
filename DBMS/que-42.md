####  Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table

```sql
create user "user1" identified by "user123";
grant select on courses to user1;
```

```sql
create user "user2" identified by "user456";
```