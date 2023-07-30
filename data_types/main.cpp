#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

  cout << "Int Min " << numeric_limits<int>::min() << endl;
  cout << "Int Max " << numeric_limits<int>::max() << endl;
  cout << "Unsigned Int Min " << numeric_limits<unsigned int>::min() << endl;
  cout << "Unsigned Int Max " << numeric_limits<unsigned int>::max() << endl;
  cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
  cout << "Long Int Max " << numeric_limits<long int>::max() << endl;
  cout << "Unsigned Long Int Min " << numeric_limits<unsigned long int>::min()
       << endl;
  cout << "Unsigned Long Int Max " << numeric_limits<unsigned long int>::max()
       << endl;
  return 0;
}