Defining a Namespace:
main.cpp.1
  namespace namespace_name {
     // code declarations
  }

  To call the namespace-enabled version of either function or variable, prepend (::) the namespace name:
    name::code;  // code could be variable or function.

using directive:
main.cpp.2
main.cpp.3

Nested Namespaces:
main.cpp.4
  namespace namespace_name1 {
     // code declarations
     namespace namespace_name2 {
        // code declarations
     }
  }

  You can access members of nested namespace by using resolution operators:
  // to access members of namespace_name2
using namespace namespace_name1::namespace_name2;

  // to access members of namespace:name1
using namespace namespace_name1;

