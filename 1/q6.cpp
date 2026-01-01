#include <iostream>

int main() {
  int n1, n2;
  printf("Enter n1: ");
  std::cin >> n1;
  printf("Enter n2: ");
  std::cin >> n2;

  if (n1 % n2 != 0) printf("%d is NOT multible of %d", n1, n2);
  else printf("%d is a multible of %d", n1, n2);
  return 0;
}
