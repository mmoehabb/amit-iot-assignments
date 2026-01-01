#include <cmath>
#include <iostream>

bool isPerfectSquare(double n);

int main() {
  int n1;
  printf("Enter n1: ");
  std::cin >> n1;

  if (isPerfectSquare(n1)) printf("%d is a perfect square.", n1);
  else printf("%d is NOT a perfect square.", n1);

  return 0;
}

bool isPerfectSquare(double n) {
  double sq = std::sqrt(n);
  int sqi = sq;
  double diff = sq - sqi;
  return !(diff > 0);
}
