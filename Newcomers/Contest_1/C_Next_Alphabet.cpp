#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;

  if (ch >= 'a' && ch <= 'z')
  {
  if (ch == 'z')
  cout << char('a') << endl;
  else 
  cout << char(ch + 1) << endl;
  }

  return 0;
}
