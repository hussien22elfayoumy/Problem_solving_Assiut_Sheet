#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + i - 1; j++)
    {
      if (j + i >= n + 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (2 * n) - i; j++)
    {
      if (j >= i)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}