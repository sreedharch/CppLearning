#include <iostream>
using namespace std;

class Adder {
  // hidden data from outside world
  int total;

public:
  // constructor
  Adder(int i = 0) { total = i; }

  // interface to outside world
  int getTotal() { return total; }
  void addNum(int number) { total += number; }
};

int main() {
  Adder a;

  a.addNum(10);
  a.addNum(20);
  a.addNum(30);

  cout << "Total " << a.getTotal() << endl;
}