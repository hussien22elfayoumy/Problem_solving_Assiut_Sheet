#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
  if (x == 1)
    return false;
  else
  {
    for (int i = 2; i*i <= x; i++)
    {
      if (x % i == 0)
      {
        return false;
      }
    }
  }
  return true;
}
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    if (isPrime(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}