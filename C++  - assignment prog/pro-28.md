<h4> What is the scope of variables in C++? Differentiate between local and global scope</h4>

- The scope of a variable is the area of the program where the variable is valid.

- Local scope: Variables declared inside a function or block have local scope. They are only accessible within
that function or block.

- Global scope: Variables declared outside any function or block have global scope. They are accessible from any
part of the program.

| Local scope | Global scope |
| --- | --- |
Global variables are declared outside all the function blocks. |Local Variables are declared within a function block.
The scope remains throughout the program. |The scope is limited and remains within the function only in which they are declared.
Any change in global variable affects the whole program, wherever it is being used. |Any change in the local variable does not affect other functions of the program.
It can be accessed throughout the program by all the functions present in the program.|It can only be accessed by the function statements in which it is declared and not by the other functions.
If the global variable is not initialized, it takes zero by default.| If the local variable is not initialized, it takes the garbage value by default.
Global variables are stored in the data segment of memory. | Local variables are stored in a stack in memory