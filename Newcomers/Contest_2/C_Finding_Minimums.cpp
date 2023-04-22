#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int t, k, n;
  cin >> t >> k;
  int temp = pow(10, 9);
  for (int i = 1; i <= t; i++)
  {
    cin >> n;
    if (n < temp)
    temp = n;
    if (i % k == 0 || i == t)
    {
    cout << temp << " ";
    temp = pow(10, 9);
    }
  }
  cout << endl;
  return 0;
}