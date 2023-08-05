Templates are the foundation of generic programming, which involves writing code in a way that is independent of any particular type.
The library containers like iterators and algorithms are examples of generic programming
There is a single definition of each container, such as vector, but we can define many different kinds of vectors for example, vector <int> or vector <string>.

Function Template:
main.cpp.1
  template <class type> ret-type func-name(parameter list)   {
     // body of function
  }

Class Template:
main.cpp.2
  template <class type> class class-name {
     .
     .
     .
  }
