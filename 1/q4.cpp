#include <iostream>

int main() {
  char c = ' ';
  printf("Enter any character: ");
  std::cin >> c;

  bool isAlphabet = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
  printf("Is %c an alphabet character? %s", c, isAlphabet ? "YES" : "NO");
  return 0;
}
