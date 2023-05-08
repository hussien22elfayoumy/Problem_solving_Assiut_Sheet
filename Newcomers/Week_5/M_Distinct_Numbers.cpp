#include <bits/stdc++.h>
using namespace std;
int dis(int arr[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != arr[i + 1])
      count++;
  }
  return count;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  cout << dis(arr, n) << endl;
  return 0;
}