#include <bits/stdc++.h>
using namespace std;
long long solve(int x, int n)
{
  long long sum = 0;
  for (int i = 2; i <= n; i += 2)
  {
    int j = i;
    long long mul = 1;
    while (j--)
    {
      mul *= x;
    }
    sum += mul;
  }
  return sum;
}
int main()
{
  int x, y;
  cin >> x >> y;
    cout << solve(x, y) << endl;
  return 0;
}