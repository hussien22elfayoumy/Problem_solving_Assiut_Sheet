#include <bits/stdc++.h>
using namespace std;
void print(int x)
{
  for (int i = 1; i <= x; i++)
  {
    cout << i ;
    if (i < x)
    cout << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cin >> n;
  print(n);
  return 0;
}