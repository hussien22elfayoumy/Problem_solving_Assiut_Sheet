#include <bits/stdc++.h>
using namespace std;
int Min(int arr[], int size)
{
  int minn = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < minn)
      minn = arr[i];
  }
  return minn;
}
int Max(int arr[], int size)
{
  int maxx = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > maxx)
      maxx = arr[i];
  }
  return maxx;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << Min(arr, n) << " " << Max(arr, n) << endl;
  return 0;
}