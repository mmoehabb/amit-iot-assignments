#include <cstdio>
#include <string>

using namespace std;

class Triangle {
private:
  float s1;
  float s2;
  float s3;

public:
  Triangle(float s1, float s2, float s3) {
    this->s1 = s1;
    this->s2 = s2;
    this->s3 = s3;
  }

  string getType() {
    if (this->s1 == this->s2 && this->s2 == this->s3) return "equilateral";

    if (
      this->s1 == this->s2 ||
      this->s1 == this->s3 ||
      this->s2 == this->s3
    ) return "isosceles";

    return "scalene";
  }
};

int main() {
  Triangle t1 = *new Triangle(3, 4, 5);
  Triangle t2 = *new Triangle(10, 10, 5);
  Triangle t3 = *new Triangle(6, 6, 6);

  printf("t1: %s\n", t1.getType().c_str());
  printf("t2: %s\n", t2.getType().c_str());
  printf("t3: %s\n", t3.getType().c_str());
}
