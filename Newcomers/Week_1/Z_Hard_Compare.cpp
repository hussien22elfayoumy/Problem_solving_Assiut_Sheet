#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long a, c, b, d;

  cin >> a >> b >> c >> d;

  if (b*log(a) > d*log(c))
  cout << "YES" << endl;
  else
  cout << "NO" << endl;

  return 0;
}