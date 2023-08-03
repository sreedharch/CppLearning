C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator overloading
Function Overloading:
  main.cpp.1
  multiple definitions for the same function name in the same scope.
  The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.

Operators Overloading:
  main.cpp.2
  
Unary Operators Overloading:
main.cpp.3
	examples of Unary operators
		The increment (++) and decrement (--) operators.
		The unary minus (-) operator.
		The logical not (!) operator.
		
Binary Operators Overloading:
main.cpp.4
	The binary operators take two arguments
	use binary operators like addition (+) operator, subtraction (-) operator and division (/) operator

Relational Operators Overloading:
main.cpp.5
	various relational operators supported by C++ language like (<, >, <=, >=, ==, etc.)
  You can overload any of these operators, which can be used to compare the objects of a class.

Input/Output Operators Overloading:
main.cpp.6
  C++ is able to input and output the built-in data types using the stream extraction operator >> and the stream insertion operator <<. The stream insertion and stream extraction operators also can be overloaded to perform input and output for user-defined types like an object.
  it is important to make operator overloading function a "friend" of the class because it would be called without creating an object.

Overloading Increment ++ & Decrement -- :
main.cpp.7
  increment (++) and decrement (--) operators are two important unary operators available in C++
  
Assignment Operators Overloading:
main.cpp.8
  overload the assignment operator (=) and it can be used to create an object just like the copy constructor

Function Call Operator () Overloading:
main.cpp.9
  The function call operator () can be overloaded for objects of class type
  When you overload ( ), you are not creating a new way to call a function. Rather, you are creating an operator function that can be passed an arbitrary number of parameters.

Subscripting [] Operator Overloading:
main.cpp.10
  This operator can be overloaded to enhance the existing functionality of C++ arrays.

Class Member Access Operator (->) Overloading:
main.cpp.11
  It is defined to give a class type a "pointer-like" behavior
  operator -> must be a member function
  its return type must be a pointer or an object of a class
  operator-> is used often in conjunction with the pointer-dereference operator * to implement "smart pointers."
  These pointers are objects that behave like normal pointers except they perform other tasks when you access an object through them, such as automatic object deletion either when the pointer is destroyed, or the pointer is used to point to another object.