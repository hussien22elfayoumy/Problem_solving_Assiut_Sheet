#include <iostream>
using namespace std;

int main()
{
  int age, years, months;

  cin >> age;

  years = age / 365;
  age %= 365;
  months = age / 30;
  age %= 30;
  
  cout << years << " " << "years" << endl;
  cout << months << " " << "months" << endl;
  cout << age << " " << "days" << endl;

  return 0;
}