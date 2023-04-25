#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int j = 0; j < n - 1; j++)
  {
    int minn = j;
    for (int i = j + 1; i < n; i++)
    {
      if (arr[i] < arr[minn])
        minn = i;
    }
    swap(arr[j], arr[minn]);
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}