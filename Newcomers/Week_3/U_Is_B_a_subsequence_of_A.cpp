#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int cnt = 0, j = 0;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    for (; j < n; j++)
    {
      if (x == a[j])
      {
        cnt++;
        j++;
        break;
      }
    }
  }
  if (cnt == m)
  {
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}