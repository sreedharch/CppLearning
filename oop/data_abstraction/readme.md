Data Abstraction:
  Data abstraction refers to providing only essential information to the outside world and hiding their background details
  It relies on the separation of interface and implementation
  In C++, we use classes to define our own abstract data types (ADT). You can use the cout object of class ostream to stream data to standard output

Access Labels:
  Members defined with a public label are accessible to all parts of the program. The data-abstraction view of a type is defined by its public members
  Members defined with a private label are not accessible to code that uses the class. The private sections hide the implementation from code that uses the type

Benefits:
  Class internals are protected from inadvertent user-level errors, which might corrupt the state of the object
  The class implementation may evolve over time in response to changing requirements or bug reports without requiring change in user-level code