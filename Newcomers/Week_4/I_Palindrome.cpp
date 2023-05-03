#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int len = s.size();
  bool check = true;
  for (int i = 0; i < len / 2; i++)
  {
    if (s[len - i - 1] != s[i])
    {
      check = false;
      break;
    }
  }
  if (check)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}