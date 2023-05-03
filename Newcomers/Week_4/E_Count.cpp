#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    count += (s[i] - '0');
  }
  cout << count << endl;
  return 0;
}