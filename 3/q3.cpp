#include <cstdio>
#include <string>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  float balance;

public:
  BankAccount(string accountNumber, float balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
  }
  void deposit(float amount) { this->balance += amount; }
  void withdraw(float amount) { this->balance -= amount; }

  void print() {
    printf("Account Number: %s\nBalance: %f\n", this->accountNumber.c_str(), this->balance);
  }
};

int main() {
  BankAccount bankAccount = *new BankAccount("123123123", 1000);

  bankAccount.deposit(1132);
  bankAccount.withdraw(123);
  
  bankAccount.print();
}
