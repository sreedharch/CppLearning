A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package.
The data and functions within a class are called members of the class.

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

Access Specifiers:
  public:
    A public member can be accessed from outside the class anywhere within the scope of the class object.
  private:
    A private member variable or function cannot be accessed, or even viewed from outside the class.
  protected:
    A protected member variable or function is very similar to a private member but it provided one additional benefit that they can be accessed in child classes which are called derived classes.

Accessing the Data Members:
main.cpp.1

concepts related to C++ Classes and Objects:
  Class Member Functions
    main.cpp.2

  Class Access Modifiers
    main.cpp.3, main.cpp.4, main.cpp.5

  Constructor & Destructor
    main.cpp.6, main.cpp.7, main.cpp.8

  Copy Constructor
    main.cpp.9

  Friend Functions
    A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class.
    main.cpp.10

  Inline Functions
    main.cpp.11

  this Pointer
    main.cpp.12

  Pointer to C++ Classes
    main.cpp.13

  Static Members of a Class
    main.cpp.14, main.cpp.15
