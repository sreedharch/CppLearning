#include <iostream>
using namespace std;

class Box {
private:
  double length, breadth, height;

public:
  double getVolume() { return length * breadth * height; }
  double setLength(double len) { length = len; }
  void setBreadth(double bre) { breadth = bre; }
  void setHeight(double hei) { height = hei; }

  // Overload + operator to add two Box objects
  Box operator+(const Box &b) {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
  }
};

int main() {
  Box box1, box2, box3;
  double volume = 0.0;

  box1.setLength(6.0);
  box1.setBreadth(7.0);
  box1.setHeight(5.0);

  box2.setLength(12.0);
  box2.setBreadth(13.0);
  box2.setHeight(10.0);

  volume = box1.getVolume();
  cout << "Volume of box1: " << volume << endl;

  volume = box2.getVolume();
  cout << "Volume of box2: " << volume << endl;

  box3 = box1 + box2;

  volume = box3.getVolume();
  cout << "Volume of box3: " << volume << endl;
}