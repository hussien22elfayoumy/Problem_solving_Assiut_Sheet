#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n];
  int freq[m + 1] = {};
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    int x = arr[i];
    freq[x]++;
  }

  for (int i = 1; i <= m; i++)
    cout << freq[i] << endl;
  return 0;
}