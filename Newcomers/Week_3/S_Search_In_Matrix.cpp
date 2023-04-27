#include <iostream>
using namespace std;

int main()
{
  int n, m, num;
  cin >> n >> m;
  int matrix[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    cin >> matrix[i][j];
  }
  cin >> num;
  bool ch = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (num == matrix[i][j])
      {
      ch = true;
      break;
      }
    }
  }
  if(ch == true)
  cout << "will not take number" << endl;
  else
  cout << "will take number" << endl;
  return 0;
}