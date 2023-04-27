#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  bool check = true;
    if (s[a] != '-')
    {
    cout << "No" << endl;
    return 0;
    }
  for (int i = 0; i < a + b + 1; i++)
  {
    if ((s[i] < '0' || s[i] > '9') && i != a)
    check = false;
  }
  if(check)
  cout << "Yes" << endl;
  else
  cout << "No" << endl;
}