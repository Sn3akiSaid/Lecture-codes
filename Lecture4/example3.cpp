//Find Errors: L4/example3.cpp
//Source: MIT OpenCourseWare, Licence: CC BY-NC-SA 4.0
//Warning: this code may not follow our house style.
#include<iostream>
class Point
{
private:
  int x, y;
public:
  Point(int u, int v) : x(u), y(v) {}
  int getX(){return x;}
  int getY(){return y;}
  void setX(int newX) const {x = newX;}
};

int main()
{
  Point myPoint(5, 3);
  myPoint.setX(15);
  std::cout << myPoint.getX() << " " << myPoint.getY() << "\n";
  return 0;
}


