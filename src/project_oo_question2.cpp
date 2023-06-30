#include <iostream>

class Point {
protected:
  const int maxValue = 400;
  const int minValue = 0;
  int x = 0;
  int y = 0;

public:
  Point(const int x, const int y) {
    this->setX(x);
    this->setY(y);
  }

  int getX() { return x; }
  int getY() { return y; }

  void setX(const int x) {
    if ((x >= this->minValue) && (x < this->maxValue)) {
      this->x = x;
    }
  }
  void setY(const int y) {
    if ((y >= this->minValue) && (y < this->maxValue)) {
      this->y = y;
    }
  }

  void moveBy(const int dx, const int dy) {
    setX(getX() + dx);
    setY(getY() + dy);
  }
};

class ScreenPoint : public Point {
protected:
  const int maxValue = 300;

public:
  ScreenPoint(const int x, const int y) : Point(x, y) {}
};

int main() {
  Point point(400, 400);
  ScreenPoint screnPoint(200, 200);

  std::cout << screnPoint.getX() << std::endl;
}
