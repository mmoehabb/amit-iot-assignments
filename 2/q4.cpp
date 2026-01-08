#include <iostream>

int numOfHoles(int n);

int main() {
  int n = 0;
  printf("Enter any integer: ");
  std::cin >> n;
  printf("Number of holes = %d\n", numOfHoles(n));
  return 0;
}

int numOfHoles(int n) {
  if (n == 0) return 1;

  int holes = 0;
  while (n > 0) {
    int d = n % 10;
    if (d == 0 || d == 4 || d == 6 || d == 9) holes += 1;
    else if (d == 8) holes += 2;
    n /= 10;
  }

  return holes;
}
