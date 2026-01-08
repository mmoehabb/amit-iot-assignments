#include <iostream>

double cube(double n);

int main() {
  double n1;

  printf("Enter n1: ");
  std::cin >> n1;
  printf("%.2f^3 = %.2f\n", n1, cube(n1));
  
  return 0;
}

double cube(double n) {
  return n * n * n;
}
