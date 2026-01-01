#include <iostream>

int calcHeatingTime(int temp);

int main() {
  int temp;
  printf("Enter temperature in celsius: ");
  std::cin >> temp;
  printf("Heating Time for %d Celsius: %d", temp, calcHeatingTime(temp));
  return 0;
}

int calcHeatingTime(int temp) {
  if (temp > 0 && temp <= 30) return 7;
  if (temp > 30 && temp <= 60) return 5;
  if (temp > 60 && temp <= 90) return 3;
  if (temp > 90) return 1;
  return 0;
}
