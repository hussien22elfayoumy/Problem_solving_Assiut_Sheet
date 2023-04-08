#include <iostream>
using namespace std;

int main()
{
  int a, b;
  char s;
  cin >> a >> s >> b;

    switch (s)
    {
      case '+':
      cout << a + b << endl;
      break;
      case '-':
      cout << a - b << endl;
      break;
      case '*':
      cout << a * b << endl;
      break;
      case '/':
        if (b == 0)
        return 0;
        else
        cout << a / b << endl;
      break;
      default :
      return 0;
    }
    
  return 0;
}