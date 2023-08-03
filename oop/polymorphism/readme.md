Polymorphism:
main.cpp.1
  polymorphism means having many forms
  polymorphism occurs when there is a hierarchy of classes and they are related by inheritance
  C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.

Virtual Function:
main.cpp.1
  A virtual function in base class, with another version in derived class, signals to the compiler that we don't want static linkage for this function.
  What we do want is the selection of the function to be called at any given point in the program to be based on the kind of object for which it is called. This sort of operation is referred to as dynamic linkage, or late binding.

Pure Virtual Functions:
main.cpp.2
  when there's no meaningful definition to be given for the function in the base class, but needs redefined in a derived class, pure virutal function is used