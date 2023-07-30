#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main() {
  int a = 100, b = 200;
  cout << "Before swap value of a: " << a << " and b: " << b << endl;
  cout << "a: " << &a << endl;
  swap(a, b);
  cout << "After swap value of a: " << a << " and b: " << b << endl;
}

void swap(int &a, int &b) {
  int temp;
  cout << "a: " << &a << endl;
  temp = a;
  a = b;
  b = temp;
}