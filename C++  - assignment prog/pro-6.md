# List and explain the main advantages of OOP over POP


| Advantage      |  OOP       |    POP      |
| -------- | ---------- |----------|
|Modularity and Code Reusability|Code is organized into classes and objects, making it easier to reuse and maintain. For example, once a class is created, it can be used multiple times without rewriting the code.|Functions need to be called and reused explicitly, and there is less focus on modularity, which can lead to repetitive code.|
|Data Encapsulation| Data and functions are bundled together in classes, and access to data is controlled using access modifiers (private, public, protected). This ensures data security and prevents unintended changes.|Data is globally accessible, making it vulnerable to unintentional modification, leading to potential bugs and security risks.|
|Polymorphism|Supports polymorphism, where the same function or operator can behave differently depending on the context. This allows for more flexible and dynamic code.|Does not support polymorphism; each function must be unique, leading to less flexibility.|
|Ease of Maintenance|Since code is organized into objects and classes, it is easier to modify, update, and debug specific parts of the program without affecting the entire codebase.|The code is sequential and can be harder to maintain as changes may affect multiple parts of the program|
|Data Abstraction|Allows for data abstraction, where only essential details are shown to the user, hiding complex implementation details.|Does not inherently support abstraction, making it harder to separate implementation from the interface.|
|Scalability|Easier to scale and extend as new features can be added by creating new classes or inheriting existing ones.|Scaling requires adding new functions or modifying existing ones, which can lead to a cluttered and less manageable codebase.|