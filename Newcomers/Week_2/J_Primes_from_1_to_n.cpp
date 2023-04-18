#include <iostream>
using namespace std;

int main()
{
  int n , x;
  cin >> n;
  x = n;

  for (int i = 2; i <= n; i++)
  {
    int check = 0;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      check = 1;
    }
    if (check == 0)
    cout << i << " ";
  }
  return 0;
}