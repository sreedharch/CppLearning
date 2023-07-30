When creating a class, instead of writing completely new data members and member functions, the programmer can designate that the new class should inherit the members of an existing class. 
This existing class is called the base class, and the new class is referred to as the derived class.
inheritance implements the is a relationship.

Base and Derived Classes:
main.cpp.1
  class derived-class: access-specifier base-class
If the access-specifier is not used, then it is private by default.

Multiple Inheritance:
class derived-class: access baseA, access baseB....