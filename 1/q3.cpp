#include <iostream>

bool isOperator(char op);
double performOperator(char op, double n1, double n2);

int main() {
  // Enter the operator
  char op = ' ';
  while (!isOperator(op)) {
    printf("Enter an operator (+, -, *, /): ");
    std::cin >> op;
  }

  // Enter input numbers
  double n1, n2;
  printf("Enter n1: ");
  std::cin >> n1;
  printf("Enter n2: ");
  std::cin >> n2;

  // Display the result
  double result = performOperator(op, n1, n2);
  printf("%.2f %c %.2f = %.2f", n1, op, n2, result);
  return 0;
}

bool isOperator(char op) {
  switch (op) {
    case '+':
      return true;
    case '-':
      return true;
    case '/':
      return true;
    case '*':
      return true;
    default:
      return false;
  }
}

double performOperator(char op, double n1, double n2) {
  switch (op) {
    case '+':
      return n1 + n2;
    case '-':
      return n1 - n2;
    case '/':
      return n1 / n2;
    case '*':
      return n1 * n2;
    default:
      return 0;
  }
}
