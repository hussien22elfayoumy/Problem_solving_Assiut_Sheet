#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;

  long long mul = a * b * c * d;
  if (mul % 100 < 10)
  cout << "0" << mul % 100 << endl;
  else
  cout << mul % 100 << endl;

  return 0;
}