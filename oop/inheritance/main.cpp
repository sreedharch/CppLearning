#include <iostream>
using namespace std;

// Base Class Shape
class Shape {
protected:
  int width, height;

public:
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }
};

// Base class PaintCost
class PaintCost {
public:
  int getCost(int area) { return area * 70; }
};

// Derived class
class Rectangle : public Shape, public PaintCost {
public:
  int getArea() { return width * height; }
};

int main() {
  Rectangle rect;
  int area;

  rect.setWidth(5);
  rect.setHeight(7);

  area = rect.getArea();

  cout << "Total area: " << rect.getArea() << endl;
  cout << "Total paint cost: $" << rect.getCost(area) << endl;
}