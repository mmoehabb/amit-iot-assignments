#include <iostream>

char toUpperCase(char c);

int main() {
  char c;

  printf("Enter a lower case letter: ");
  std::cin >> c;

  printf("The upper-case letter: %c\n", toUpperCase(c));
}

char toUpperCase(char c) {
  return 'A' + c - 'a';
}
