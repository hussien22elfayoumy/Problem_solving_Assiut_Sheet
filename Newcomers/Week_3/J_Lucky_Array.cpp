#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int minn = INT_MAX;
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < minn)
      minn = arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (minn == arr[i])
      count++;
  }
  (count % 2 != 0) ? cout << "Lucky" << endl : cout << "Unlucky" << endl;

  return 0;
}