Multi-dimensional arrays:
  main.cpp.1
Pointer to an array:
  main.cpp.2
Passing arrays to functions:
main.cpp.3
    C++ does not allow to pass an entire array as an argument to a function.
    You can pass a pointer to an array by specifying the array's name without an index.
    to pass a single-dimension array as an argument in a function, you would have to declare function formal parameter in one of following three ways:
      Formal parameters as a pointer -
          void myFunction(int *param) {
             .
             .
             .
          }
      Formal parameters as a sized array -
          void myFunction(int param[10]) {
             .
             .
             .
          }
      Formal parameters as an unsized array -
          void myFunction(int param[]) {
             .
             .
             .
          }
Return array from functions:
    C++ does not allow to return an entire array as an argument to a function, you can return a pointer to an array by specifying the array's name without an index.
      int * myFunction() {
         .
         .
         .
      }
    point to remember is that C++ does not advocate to return the address of a local variable to outside of the function so you would have to define the local variable as static variable.