#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n % 2 == 0)
    return 0;
  else
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i == j)
        {
          if (i + j == n + 1)
            cout << "X";
          else
            cout << "\\";
        }
        else if (i + j == n + 1)
        {
          cout << "/";
        }
        else
          cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}