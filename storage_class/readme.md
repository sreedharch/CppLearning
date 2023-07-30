following are storage classes:
  auto
  register
  static
  extern
  mutable

auto Storage Class:
auto can only be used within functions, i.e., local variables. 

register Storage Class:
is used to define local variables that should be stored in a register instead of RAM.

static Storage Class:
main.cpp.1
instructs the compiler to keep a local variable in existence during the life-time of the program.
static modifier may also be applied to global variables, it causes that variable's scope to be restricted to the file in which it is declared.

extern Storage Class:
main.cpp.2, support.cpp
is used to give a reference of a global variable that is visible to ALL the program files.

mutable Storage Class:
a mutable member can be modified by a const member function.