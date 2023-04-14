#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a > b)
  {
    if (a - b == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else if (b > a)
  {
    if (b - a == 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else if (a = b)
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
  return 0;
}