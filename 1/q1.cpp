#include <iostream>

int main() {
  int n1, n2;

  printf("Enter n1: ");
  std::cin >> n1;

  printf("Enter n2: ");
  std::cin >> n2;

  int res = ((n1 + n2) * 3) - 10;
  printf("((%d + %d) * 3) - 10 = %d", n1, n2, res);
}
