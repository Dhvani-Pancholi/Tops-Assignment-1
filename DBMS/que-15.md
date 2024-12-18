#### Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE)

```sql
create table teacher (teacher_id int PRIMARY key,teacher_name varchar(50) not null, subject varchar(30) not null, email varchar(20) unique); 
```