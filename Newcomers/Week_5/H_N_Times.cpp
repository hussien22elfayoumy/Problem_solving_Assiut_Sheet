#include <bits/stdc++.h>
using namespace std;
void nTimes(int n, char c)
{
  for (int i = 0; i < n; i++)
    cout << c << " ";
  cout << endl;
}
int main()
{
  int t, n;
  char c;
  cin >> t;
  while (t--)
  {
    cin >> n >> c;
    nTimes(n, c);
  }
  return 0;
}