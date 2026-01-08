#include <iostream>

int main() {
  float n1, n2;
  printf("Enter n1: ");
  std::cin >> n1;
  printf("Enter n2: ");
  std::cin >> n2;

  float sum = n1 + n2;
  printf("----------------\n");
  printf("Sum: %.2f\n", sum);
  printf("Integer floor: %d\n", (int)sum);

  return 0;
}
