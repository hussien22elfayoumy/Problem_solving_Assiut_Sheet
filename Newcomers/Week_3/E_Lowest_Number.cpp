#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int minn = arr[0], minIndx = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < minn)
    {
    minn = arr[i];
    minIndx = i;
    }
  }
  cout << minn << " " << minIndx + 1 << endl;
  return 0;
}