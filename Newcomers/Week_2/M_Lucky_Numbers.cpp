#include <iostream>
using namespace std;

int main()
{
  int a, b;
  int cnt = 0;
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    bool ch = 0;
    int n = i;
    while (n != 0)
    {
      int rem = n % 10;
      if (rem != 4 && rem != 7)
      {
        ch = 1;
      }
      n /= 10;
    }
    if (ch == 0)
    {
      cout << i << " ";
      cnt++;
    }
  }
  if (cnt == 0)
  cout << -1;
  cout << endl;
  return 0;
}