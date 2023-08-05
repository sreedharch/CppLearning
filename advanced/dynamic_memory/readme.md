Memory in your C++ program is divided into two parts:
  Stack -> All variables declared inside the function will take up memory from the stack
  Heap -> This is unused memory of the program and can be used to allocate the memory dynamically when program runs

new and delete Operators:
  new operator to allocate memory dynamically for any data-type
  Syntax: new data-type;
  Syntax: delete pvalue;

Dynamic Memory Allocation for Arrays:
  Eg:
  char* pvalue  = NULL;         // Pointer initialized with null
  pvalue  = new char[20];       // Request memory for the variable
  
  Eg:
  double** pvalue  = NULL;      // Pointer initialized with null 
  pvalue  = new double [3][4];  // Allocate memory for a 3x4 array 
  
  Eg:
  delete [] pvalue;

Dynamic Memory Allocation for Objects:
main.cpp