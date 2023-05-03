#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, q, x;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  while (q--)
  {
    cin >> x;
    bool check = false;
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
      mid = (start + end) / 2;
      if (x == arr[mid])
      {
        check = true;
        break;
      }
      else if (x < arr[mid])
        end = mid - 1;
      else
        start = mid + 1;
    }
    if (check)
      cout << "found" << endl;
    else
      cout << "not found" << endl;
  }
  return 0;
}