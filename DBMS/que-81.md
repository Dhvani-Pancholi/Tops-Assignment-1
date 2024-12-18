#### Explain the concept of SAVEPOINT in transaction management. How do ROLLBACK and COMMIT interact with savepoints?

- A SAVEPOINT is a logical rollback point in a transaction. Usually, when you execute the ROLLBACK command, it undoes the changes until the last COMMIT. But, if you create save points you can partially roll the transaction back to these points. You can create multiple save points between two commits.

<b>COMMIT:</b>

- Finalizes the transaction and releases all savepoints.
- Changes made before the COMMIT are permanent.
After a COMMIT, no ROLLBACK TO SAVEPOINT is possible.

<b>ROLLBACK:</b>

- Without a savepoint: Reverts the entire transaction, undoing all changes.

- With a savepoint: Reverts the transaction to the state at the savepoint, undoing only the changes after the savepoint.

<b>SAVEPOINT:</b>

- Creates a marker in the transaction, allowing you to partially undo changes up to the savepoint.

- Savepoints are released after a COMMIT or a full ROLLBACK.
