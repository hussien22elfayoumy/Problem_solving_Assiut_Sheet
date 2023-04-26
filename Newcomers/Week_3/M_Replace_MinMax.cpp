#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  int minn = INT_MAX, minIndx, maxx = INT_MIN, maxIndx;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    maxx = max(maxx, arr[i]);
    minn = min(minn, arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (maxx == arr[i])
    maxIndx = i;
    else if (minn == arr[i])
    minIndx = i;
  }
  swap(arr[maxIndx], arr[minIndx]);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
  return 0;
}