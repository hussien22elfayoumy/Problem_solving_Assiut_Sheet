#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int rem = n % 10;
  n /= 10;
  if (rem % n == 0 || n % rem == 0)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;

  return 0;
}