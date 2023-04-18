#include <iostream>
using namespace std;

int main()
{
  int t, n;
  long long mul = 1;
  cin >> t;

  while (t > 0)
  {
    cin >> n;

    if (n == 0)
      mul = 1;
    while (n > 0)
    {
      mul *= n;
      n--;
    }
    cout << mul << endl;
    mul = 1;
    t--;
  }
  return 0;
}