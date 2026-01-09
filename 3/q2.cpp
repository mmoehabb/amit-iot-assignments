#include <cstdio>
#include <string>

using namespace std;


class Car {
private:
  string company;
  string model;
  int year;

public:
  string getCompany() { return this->company; }
  void setCompany(string company) { this->company = company; }

  string getModel() { return this->model; }
  void setModel(string model) { this->model = model; }

  int getYear() { return this->year; }
  void setYear(int year) { this->year = year; }

  void print() {
    printf("Company: %s\nModel: %s\nYear: %d\n", this->company.c_str(), this->model.c_str(), this->year);
  }
};

int main() {
  Car c;

  c.setCompany("Mercedes");
  c.setModel("R129");
  c.setYear(2001);

  c.print();
}
