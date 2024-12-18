#### How do PRIMARY KEY and FOREIGN KEY constraints differ?

|PRIMARY  KEY | FOREIGN KEY|
|-------------|------------|
It is used to uniquely identify data in the table.|It is used to maintain relationship between tables.
|It can't be NULL.|It can accept the NULL values.
|Two or more rows can't have same primary key.|It can carry duplicate value for a foreign key attribute.|Primary has clustered index.|By default, It is not clustered index.|
Primary key constraint can be defined on temporary table.|It can't be defined on temporary tables.