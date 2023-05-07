#include <bits/stdc++.h>
using namespace std;
void Swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
  cout << x << " " << y << endl;
}
int main()
{
  int x, y;
  cin >> x >> y;
  Swap(x, y);
  return 0;
}