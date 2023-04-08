#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  double r, area, pi;
  pi = 3.141592653;

  cin >> r;
  area = pi * (r * r);
  cout << fixed << setprecision(9);
  cout << area << endl;
  return (0);
}