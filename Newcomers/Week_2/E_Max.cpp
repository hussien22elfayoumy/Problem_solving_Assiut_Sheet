#include <iostream>
using namespace std;

int main()
{
  int n, x, tmp = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x > tmp)
    tmp = x;
  }
  cout << tmp;
  return 0;
}