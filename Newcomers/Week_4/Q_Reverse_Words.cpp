#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int x = 0;
  while (cin >> s)
  {
    reverse(s.begin(), s.end());
    if(x)
    {
      cout << " ";
    }
    x = 1;
    cout << s;
  }
  return 0;
}