#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

class Point {
  Point(float x, float y) : x(x), y(y) {}

public:
  float x, y;

  friend std::ostream& operator<<(std::ostream& os, const Point& p) {
    return os << "x: " << p.x << " y: " << p.y;
  }

  class Factory {
    friend class Point;   
    Factory() {}           

  public:
    Point NewCartesian(float x, float y) {
      return Point{x, y};
    }

    Point NewPolar(float r, float theta) {
      return Point{r * std::cos(theta), r * std::sin(theta)};
    }
  };

  static Factory factory;
};

Point::Factory Point::factory{};

int main() {
  auto p = Point::factory.NewPolar(5, M_PI_4);
  std::cout << p << std::endl;
  return 0;
}
