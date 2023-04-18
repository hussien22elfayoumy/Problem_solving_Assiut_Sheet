#include <iostream>
using namespace std;

int main()
{
  int n, x, rem, rev = 0;
  cin >> n;
  x = n;
  while (n > 0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
  cout << rev << endl;
  if (rev == x)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}