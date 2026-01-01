#include <iostream>

int main() {
  char c = ' ';
  printf("Enter any character: ");
  std::cin >> c;

  bool isAlphabet = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
  if (!isAlphabet) {
    printf("%c is NOT from the alphabet.", c);
    return 0;
  }

  if (c >= 'A' && c <= 'Z') {
    printf("%c is already uppercase.", c);
    return 0;
  }

  printf("Uppercase version: %c", 'A' + c - 'a');
  return 0;
}
