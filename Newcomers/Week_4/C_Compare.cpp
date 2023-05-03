#include <bits/stdc++.h>
using namespace std;

int main()
{
  string x, y;
  getline(cin, x);
  getline(cin, y);
  if (x < y)
  cout << x << endl;
  else if (y < x)
  cout << y << endl;
  else if (x == y)
  cout << x << endl;
  return 0;
}