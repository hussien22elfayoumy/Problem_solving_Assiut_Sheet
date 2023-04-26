#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    for (int i = 0; i < n; i++)
    {
      int maxx = arr[i];
      for (int j = i + 1; j < n; j++)
      {
        maxx = max(maxx, arr[j]);
        cout << maxx << " ";
      }
    }
    cout << endl;
  }
  return 0;
}