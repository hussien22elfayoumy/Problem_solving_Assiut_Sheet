#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  while (q--)
  {
    int l, r, pos;
    string x;
    cin >> x;
    if (x == "pop_back")
    {
      s.pop_back();
    }
    else if (x == "front")
    {
      cout << s.front() << endl;
    }
    else if (x == "back")
    {
      cout << s.back() << endl;
    }
    else if (x == "sort")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      sort(s.begin() + l - 1, s.begin() + r);
    }
    else if (x == "reverse")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      reverse(s.begin() + l - 1, s.begin() + r);
    }
    else if (x == "print")
    {
      cin >> pos;
      cout << s.at(pos - 1) << endl;
    }
    else if (x == "substr")
    {
      cin >> l >> r;
      if (l > r)
        swap(l, r);
      string y = s.substr(l - 1, (r - l) + 1);
      cout << y << endl;
    }
    else if (x == "push_back")
    {
      char n;
      cin >> n;
      s.push_back(n);
    }
  }
  return 0;
}