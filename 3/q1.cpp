#include <cstdio>
#include <string>

using namespace std;


class Person {
private:
  string name;
  string country;
  int age;

public:
  string getName() { return this->name; }
  void setName(string name) { this->name = name; }

  string getCountry() { return this->country; }
  void setCountry(string country) { this->country = country; }

  int getAge() { return this->age; }
  void setAge(int age) { this->age = age; }

  void print() {
    printf("Name: %s\nCountry: %s\nAge: %d\n", this->name.c_str(), this->country.c_str(), this->age);
  }
};

int main() {
  Person p;

  p.setName("Mahmoud");
  p.setCountry("Egypt");
  p.setAge(25);

  p.print();
}
