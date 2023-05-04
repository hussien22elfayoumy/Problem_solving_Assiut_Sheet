#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int freq[123] = {};
  for (int i = 0; i < n; i++)
  {
    char s;
    cin >> s;
    freq[s]++;
  }
  for (int i = 'a'; i <= 'z'; i++)
  {
    if (freq[i] != 0)
    {
      while (freq[i]--)
        cout << char(i);
    }
  }
  return 0;
}