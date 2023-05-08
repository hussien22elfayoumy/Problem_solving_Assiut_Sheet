#include <bits/stdc++.h>
using namespace std;

void swapRow(int rowX[], int rowY[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int temp = rowX[i];
    rowX[i] = rowY[i];
    rowY[i] = temp;
  }
}
int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;
  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
  }
  swapRow(arr[x], arr[y], n);
  for (int i = 0; i < n; i++)
  {
    swap(arr[i][x], arr[i][y]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  return 0;
}