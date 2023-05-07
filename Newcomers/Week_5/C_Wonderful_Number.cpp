#include <bits/stdc++.h>
using namespace std;
string toBinary(int n)
{
  string binary = "";
  while (n != 0)
  {
    binary += ((n % 2) + '0');
    n /= 2;
  }
  reverse(binary.begin(), binary.end());
  return binary;
}
bool plaindrome(string s)
{
  for (int i = 0; i < s.size() / 2; i++)
  {
    if (s[i] != s[s.size() - i - 1])
    {
    return false;
    break;
    }
  }
    return true;
}
int main()
{
  int x;
  cin >> x;
  if (x % 2 == 0)
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
  if (plaindrome(toBinary(x)))
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
  }
  return 0;
}