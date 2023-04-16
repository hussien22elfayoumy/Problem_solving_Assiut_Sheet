#include <iostream>
using namespace std;

int main()
{
  double n, k, a;

  cin >> n >> k >> a;
  double res = (n * k) / a;
  long long newRes = res;
  double myRes = res - newRes;

  if (myRes > 0)
  cout << "double" << endl;
  else if (newRes > 2147483647)
  cout << "long long" << endl;
  else
  cout << "int" << endl;

  return 0;
}