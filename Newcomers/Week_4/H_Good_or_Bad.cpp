#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    bool check = false;
    for (int i = 0; i < s.size(); i++)
    {
      if ((s[i] - '0') == 0 && (s[i + 1] - '0') == 1 && (s[i + 2] - '0') == 0 ||
          (s[i] - '0') == 1 && (s[i + 1] - '0') == 0 && (s[i + 2] - '0') == 1)
      {
        check = true;
      }
    }
    if (check)
      cout << "Good" << endl;
    else
      cout << "Bad" << endl;
  }
  return 0;
}