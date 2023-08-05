#include <exception>
#include <iostream>
using namespace std;

struct MyException : public exception {
  // const char * is the return type, a pointer to a constant character, by
  // convention the first character of a zero-terminated string array what is
  // the function name
  //() is an empty parameter list, indicating that the function takes no
  //arguments const qualifies the function, so it can be called on a const
  // object, and can't directly modify the object's members throw () is an
  // exception specification which prevents it from throwing any exceptions This
  // overrides the virtual function declared in the exception base class,
  // allowing you to get a text message describing the specific exception that
  // was thrown: Ref:
  // https://learn.microsoft.com/en-us/cpp/cpp/exception-specifications-throw-cpp?view=msvc-170
  const char *what() const throw() { return "C++ Exception"; }
};

int main() {
  try {
    throw MyException();
  } catch (MyException &e) {
    cout << "MyException caught" << endl;
    cout << e.what() << endl;
  } catch (exception &e) {
  }
}