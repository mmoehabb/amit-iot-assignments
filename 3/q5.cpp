#include <cstdio>
#include <string>

using namespace std;

class Employee {
private:
  string id;
  string name;
  float salary;

public:
  Employee(string id, string name, float salary) {
    this->id = id;
    this->name = name;
    this->salary = salary;
  }

  float calculateBonus(float performance) {
    // performance >= 1: Excellent
    if (performance >= 1) return 0.2 * this->salary;
     
    // performance >= 0.5: Good
    if (performance >= 0.5) return 0.1 * this->salary;
     
    // performance >= 0.1: Average
    if (performance >= 0.1) return 0.05 * this->salary;

    return 0;
  }

  void print() {
    printf("Employee Id: %s\n", this->id.c_str());
    printf("Employee Name: %s\n", this->name.c_str());
    printf("Employee Salary: %f\n", this->salary);
  }
};

int main() {
  Employee e = *new Employee("123123123", "Ibrahim", 1000);

  float bonus = e.calculateBonus(0.856);
  
  e.print();
  printf("bonus = %f\n", bonus);
}
