#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bool check = true;
  int mid = (mid % 2 == 0) ? (mid = n / 2) : (mid = n / 2 + 1);
  for (int i = 0; i < mid; i++)
  {
    if (arr[i] != arr[n - i - 1])
    {
      check = false;
      break;
    }
  }
  if (check)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}