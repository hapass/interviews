# Game development interview questions

Main languages: C#, C++.

## Math

1. Vectors. Scalars. Addition. Subtraction. Hadamard product. Norm.
1. Cross product. Pseudo-vectors. Dot product. Applications.
1. Matrix multiplication. Matrix determinant. Inverse matrix. Transposed matrix. Applications.
1. Scale. Translation matrices.
1. Rotation matrices. Problems.
1. Complex numbers. Quaternions.
1. Transforming coordinate systems. Change of basis.
1. Linear interpolation. Rotational interpolation. Spherical interpolation.
1. Planes. Lines. Rays. Line segments.
1. Random number generation.
1. Permutations and combinations. Probabilities.
1. Recurrence relations.
1. Practice: Test if point inside triangle. Derive rotation matrix. Check if enemy is behind character.

## Algorithms

1. Stack. Queue. Linked list.
1. Bubble sort. Shell sort. Merge sort. Quick sort.
1. Heaps. Fibonacci heaps.
1. Binary search trees. Traversals.
1. Hash tables.
1. AVL tree.
1. Red-black tree.
1. B-tree.
1. Trie.
1. Fibonacci numbers.
1. Travelling salesman problem.
1. Tower of Hanoi.
1. Breadth-First Search. Depth-First Search.
1. Connected components in a graph.
1. Topological Sort.
1. Minimal spanning trees.
1. Dijkstra. A*.
1. Fisher–Yates shuffle.
1. LSD and MSD string sort. 3-way string quicksort.
1. Rabin-Karp string search.
1. Knuth-Morris-Pratt string search.

## Computer Graphics

1. Depth buffer.
1. Shaders. Graphics pipeline. Rasterization.
1. Lighting. Phong model. PBR.
1. Textures.
1. Coordinate systems. Local space. World space.
1. Camera. View space.
1. Perspective projection.
1. Shadows.
1. Normal mapping.
1. Ambient occlusion.
1. Ray tracing.

## Computer architecture

1. Binary operations. Xor, or, and, left shift, right shift.
1. Addition and subtraction of binary representations. Representing negative numbers.
1. Floating point number representation IEEE 754.
1. Powers of 2.
1. Converting between binary, octal and hex.
1. Virtual memory.
1. Cache coherency.
1. SIMD.
1. Instruction pipelines.
1. Calling conventions.
1. ISA.

## C# programming language and .NET platform

1. How executable file launches CLR.
1. How C# code is compiled and run. AOT compilation.
1. Assembly structure. How .NET manages dependencies.
1. Strings. Interning.
1. Fixed keyword.
1. Volatile keyword and memory model.
1. Garbage collector. How finalization happens. Roots.
1. IDisposable pattern. Unmanaged resources.
1. Async-await. State machine that it compiles to. GetAwaiter function. Synchronization context.
1. Threading. Tasks. Thread pool.
1. Thread synchronization primitives.
1. Producer-consumer queues.
1. How events work. How are they different from public delegate fields.
1. Delegates. Lambdas. Closures.
1. Structures and classes. Boxing. Stack vs heap.
1. Reflection. How assemblies store metadata.
1. Inheritance, interface implementation and virtual member calls.
1. New language features in latest C# version.
1. Static and member variables. Constants.
1. Generics. Type invarience.
1. Nullable value types.
1. Passing arguments and returning values by reference or by value. Out, ref, in keywords.
1. Enumerable and enumerator. Yield keyword.

## C++ programming language

1. Object lifecycle. When constructor and destructor is called. Class members initialization order.
1. Allocating memory on stack and on the heap. Placement new.
1. How inheritance works. Public vs private inheritance. Multiple inheritance. Diamond problem.
1. Virtual member calls. Can I call virtual member in constructor. Can constructor be virtual. Virtual destructor.
1. Reference vs pointer. Reference to a temporary. Pointer arithmetic.
1. Implicit type conversions.
1. Iterators in standard library. Types of iterators and their restrictions. Half interval concept.
1. Constexpr and const.
1. Volatile in C++. Atomic. Thread synchronization.
1. How program is compiled and linked. Dynamically linked and statically linked libraries.
1. All possible casts and their differences in C++.
1. Map vs unordered_map implementation details and requirements for contained objects.
1. Undefined behavior.
1. Templates. Template specialization. Pointer detector. Fibonacci with pointers. Variadic templates.
1. Exceptions. When to use. Exceptions from constructors and destructors. Stack unwinding.
1. How smart pointers work. Unique pointer. Shared pointer. Write smart pointer.
1. Rule of five. Rule of zero.
1. Macros. Concatenation. Recursive technique for __LINE__ expansion. Cases when macro can go wrong.
1. Debug symbols. Symbolicating stack traces.
1. Structure vs class.
1. Initializer lists.
1. Static keyword and what does it mean in different contexts.
1. Declaration vs Definition. Header files. Pointer to implementation.
1. Move semantics. Copy elision and return value optimization.
1. Deep copy vs shallow copy.
1. Old way of passing endless parameters to a function without variadic templates.

## Systems design

1. Inheritance. Polymorphism. Encapsulation.
1. Abstraction. Composition. Aggregation.
1. Single responsibility principle.
1. Open-closed principle.
1. Liskov substitution principle.
1. Interface segregation principle.
1. Dependency inversion principle.
1. Creational patterns.
1. Structural patterns.
1. Behavioral patterns.
1. Entity component system and component systems. Data oriented design.
1. Model View Controller and its many variations.
1. Different patterns for asynchronous programming. Async-await, observers, RX.
