#include <bits/stdc++.h>
using namespace std;
void shift(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
      count++;
    else
      cout << arr[i] << " ";
  }
  while (count--)
    cout << 0 << " ";
  cout << endl;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  shift(arr, n);
  return 0;
}