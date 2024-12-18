#### Create a PL/SQL block that calculates the total sales from an orders table.

```plsql
DECLARE
  total_sales NUMBER;
BEGIN
  SELECT SUM(order_amount) INTO total_sales FROM orders;
  DBMS_OUTPUT.PUT_LINE('Total sales: ' || total_sales);
END;
```