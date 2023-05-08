#include <bits/stdc++.h>
using namespace std;
void shift(int arr[], int n, int t)
{
  int sh = t % n;
  for (int i = n - sh; i < n; i++)
    cout << arr[i] << " ";
  for (int i = 0; i < n - sh; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main()
{
  int size, times;
  cin >> size >> times;
  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  shift(arr, size, times);
  return 0;
}