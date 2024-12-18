### When is it useful to use savepoints in a database transaction

<b>Partial rollbacks:</b> Rollback to a specific point in a transaction rather than rolling back the entire transaction.

<b>Error handling:</b> Handle errors selectively by rolling back only part of the transaction and leaving the rest intact.

<b>Nested transactions:</b> Manage operations within nested transactions without affecting the outer transaction.

<b>Complex business logic:</b> Test different paths or conditions within the same transaction, and undo operations selectively.

<b>Transaction consistency:</b> Maintain consistency during long-running transactions and ensure that operations before a failure are preserved.

<b>Avoiding unnecessary rollbacks:</b> Avoid rolling back an entire transaction when only part of it needs to be undone.