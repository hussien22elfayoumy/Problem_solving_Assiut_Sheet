#include <iostream>
using namespace std;
int main()
{
  int n, t;
  cin >> n >> t;
  int arr[n];
  long long prefix[n] = {};
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    prefix[i] = arr[i] + prefix[i - 1];
  }
  int l, r;
  while (t--)
  {
    cin >> l >> r;
    if (l == 1)
      cout << prefix[r] << endl;
    else if (l > 1)
      cout << prefix[r] - prefix[l - 1] << endl;
  }
  return 0;
}