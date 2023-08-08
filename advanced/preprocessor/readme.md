The preprocessors are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts
Preprocessor directives are not C++ statements, so they do not end in a semicolon (;)
a #include directive macro is used to include a header file into the source file

#define Preprocessor:
main.cpp.1
  #define macro-name replacement-text
  #define preprocessor directive creates symbolic constants and is called a "macro"

Function-Like Macros:
main.cpp.2

Conditional Compilation:
main.cpp.3
  #ifndef NULL
     #define NULL 0
  #endif

# and ## Operators:
main.cpp.4
  The # operator causes a replacement-text token to be converted to a string surrounded by quotes
main.cpp.5
  ## operator is used to concatenate two tokens

Predefined C++ Macros:
main.cpp.6