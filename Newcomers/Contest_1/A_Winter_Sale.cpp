#include <iostream>
using namespace std;

int main()
{
  double x, p;
  double before;
  cin >> x >> p;
  before = (p / (1.0 - x/100.0));
  cout << before << endl;
  return 0;
}