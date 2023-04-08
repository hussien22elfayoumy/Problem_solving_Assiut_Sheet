#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;
  if(ch >= char(65) && ch <= char(90))
  {
    cout << "ALPHA\nIS CAPITAL\n";
  }
  else if(ch >= char(48) && ch <= char(57))
  {
    cout << "IS DIGIT\n";
  }
  else if (ch >= char(97) && ch <= char(122))
  {
    cout << "ALPHA\nIS SMALL\n";
  }

  return 0;
}