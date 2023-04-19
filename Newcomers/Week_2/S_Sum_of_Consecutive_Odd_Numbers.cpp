#include <iostream>
using namespace std;

int main()
{
  int t, n, m;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cin >> n >> m;
    int minn = min(n, m) + 1;
    int maxx = max(n, m) - 1;
    int sum = 0;
    for (int i = minn; i <= maxx; i++)
    {
      if ( i % 2 != 0)
      sum += i;
    }
    cout << sum << endl;
  }
  return 0;
}