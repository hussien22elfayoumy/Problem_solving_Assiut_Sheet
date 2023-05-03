#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int n = s.size();
  int freq [123] = { };
  for (int i = 0; i < n; i++)
  {
    int x = s[i];
    freq[x]++;
  }
  for (int i = 'a'; i <= 'z'; i++)
  {
    if (freq[i] > 0)
    cout << char(i) << " : " << freq[i] << endl;
  }
  return 0;
}