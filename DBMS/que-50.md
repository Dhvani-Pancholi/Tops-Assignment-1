#### How are joins used to combine data from multiple tables?

They work by specifying a relationship between columns in different tables, typically using a primary key in one table and a foreign key in another. This allows for efficient querying and aggregation of data without duplicating it across tables.

###### How Joins Work :

Identify the Relationship:

- Determine how the tables are related. For instance:
A primary key in one table corresponds to a foreign key in another.

Specify the Join Condition:

- Use the ON clause to define how the rows from the tables should be matched.

Select the Data to Combine:

- Decide the type of join (e.g., INNER JOIN, LEFT JOIN) based on the required result.

