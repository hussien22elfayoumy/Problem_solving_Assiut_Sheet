#include <iostream>
using namespace std;

int main()
{
  string p1FirstName, p1LastName, p2FirstName, p2LastName;

  cin >> p1FirstName >> p1LastName;
  cin >> p2FirstName >> p2LastName;

  if(p1LastName == p2LastName)
  cout << "ARE Brothers\n";
  else
  cout << "NOT\n";
  
  return 0;
}