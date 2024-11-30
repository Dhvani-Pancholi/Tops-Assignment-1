<h4>What are arrays in C++? Explain the difference between single-dimensional and multidimensional arrays</h4>

An array in C++ is a collection of elements of the same type stored in contiguous memory locations. Arrays allow efficient storage and access to multiple values using a single identifier.

|Aspects| Single-dimensional | Multi-dimentional|
| --- | --- | --- |
Structure	|A simple list of elements.	|A table (2D), cube (3D), or higher-dimensional structure.
Declaration	|data_type array_name[size];	|data_type array_name[size1][size2]...[sizeN];
Access|	One index is needed: array_name[index]|	Multiple indices are needed: array_name[row][column]
Visualization	|Linear (like a row of boxes).|	Grid-like (table) for 2D, or more complex shapes for higher dimensions.
Use Case	|Ideal for storing a list of items.	|Suitable for tabular data, matrices, or multi-dimensional datasets.