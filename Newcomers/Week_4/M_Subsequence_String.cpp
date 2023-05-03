#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s, x = "hello";
  cin >> s;
  int len = s.size();
  int cnt = 0;
  for (int i = 0; i < len; i++)
  {
    if (s[i] == x[cnt])
      cnt++;
  }
  if (cnt == x.size())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}