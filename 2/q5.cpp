#include <iostream>

// returns 1 if n is a power of 2, 0 if it's a power of 3, and -1 otherwise
int powerDetector(int n);

int main() {
  int n = 0;
  printf("Enter any number: ");
  std::cin >> n;

  int p = powerDetector(n);
  if (p == 1) printf("%d is power of 2\n", n);
  if (p == 0) printf("%d is power of 3\n", n);
  if (p == -1) printf("%d is neither a power of 2 nor 3\n", n);

  return 0;
}

int powerDetector(int n) {
  float tmp1 = n;
  while (tmp1 > 1) tmp1 /= 2;
  if (tmp1 == 1) return 1;

  float tmp2 = n;
  while (tmp2 > 1) tmp2 /= 3;
  if (tmp2 == 1) return 0;

  return -1;
}
