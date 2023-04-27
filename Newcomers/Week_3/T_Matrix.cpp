#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int matrix[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> matrix[i][j];
  }
  long long primary = 0, secondery = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        primary += matrix[i][j];
      }
      if (i + j == n - 1)
      {
        secondery += matrix[i][j];
      }
    }
  }
    cout << abs(primary - secondery) << endl;
    return 0;
  }