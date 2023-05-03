#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  string s;
  cin >> t;

  while (t--)
  {
    cin >> s;
    if (s.size() <= 10)
    cout << s << endl;
    else
    cout << s.front() << (s.size() - 2) << s.back() << endl;
  }
  return 0;
}