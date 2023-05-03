#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    int lenA = a.size(), lenB = b.size();
    int minn = min(lenA, lenB);
    for (int i = 0; i < minn; i++)
    {
      cout << a[i] << b[i];
    }
    if (lenA < lenB)
    {
      for (int i = lenA; i < lenB; i++)
        cout << b[i];
    }
    else if (lenB < lenA)
    {
      for (int i = lenB; i < lenA; i++)
        cout << a[i];
    }
    cout << endl;
  }
  return 0;
}