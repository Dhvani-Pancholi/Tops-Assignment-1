####  Revoke the INSERT permission from user1 and give it to user2

```sql
revoke insert on courses from user1
Grant insert on courses to user2;
```