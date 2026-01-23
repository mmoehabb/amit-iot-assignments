#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

class Date {
private:
  int day;
  int month;
  int year;

public:
  void setDay(int day) { this->day = day; }
  void setMonth(int month) { this->month = month; }
  void setYear(int year) { this->year = year; }

  int getDay(int day) { return this->day; }
  int getMonth(int month) { return this->month; }
  int getYear(int year) { return this->year; }

  bool isValid() {
    if (this->day < 1 || this->day > 31) return false;
    if (this->month < 1 || this->month > 12) return false;
    if (this->year < 1) return false;
    return true;
  }

  string toString() {
    string s;
    sprintf(s.data(), "%d/%d/%d", this->day, this->month, this->year);
    return s;
  }

  void inputDate() {
    printf("Enter Date (Day Month Year): ");
    vector<string> input;
    string tmp;
    while (cin >> tmp) {
      input.push_back(tmp);
      if (input.size() >= 3) break;
    }
    this->setDay(stod(input.at(0)));
    this->setMonth(stod(input.at(1)));
    this->setYear(stod(input.at(2)));
  }
};

int main() {
  Date d;
  d.inputDate();
  printf("%s %s", d.toString().c_str(), d.isValid() ? "is VALID" : "is INVALiD");
}
