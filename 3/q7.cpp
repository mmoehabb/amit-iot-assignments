#include <cmath>
#include <cstdio>

using namespace std;

class Shape {
public:
  virtual float calArea() = 0;
  virtual float calPerimeter() = 0;
};

class Triangle : public Shape {
private:
  float base;
  float s1;
  float s2;

public:
  Triangle(float base, float s1, float s2) {
    this->base = base;
    this->s1 = s1;
    this->s2 = s2;
  }

  float calArea() override {
    float angle = atan(this->s1 / this->s2);
    float height = sin(angle) * this->s2;
    return 0.5 * height * this->base;
  }

  float calPerimeter() override {
    return this->base + this->s1 + this->s2;
  }
};

int main() {
  Shape* t = new Triangle(5, 3, 4);
  printf("area: %f\n", t->calArea());
  printf("perimeter: %f\n", t->calPerimeter());
}
