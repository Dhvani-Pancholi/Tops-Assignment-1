####  Explain the difference between GROUP BY and ORDER BY.

|GROUP BY | ORDER BY |
| --------- | --------- |
|Group by statement is used to group the rows that have the same value|Whereas Order by statement sort the result-set either in ascending or descending order.|
|It may be allowed in CREATE VIEW statement.|While it does not use in CREATE VIEW statement.|
|In select statements, it is always used before the order by keyword.|While in the select statement, it is always used after the group by keyword|
|An attribute cannot be in the group by a statement under the aggregate function.|Whereas in order by statement, the attribute can be under aggregate function.|
|Group by controls the presentation of tuples(rows).|While order by clause controls the presentation of columns.|