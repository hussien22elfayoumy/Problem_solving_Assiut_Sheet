#include <iostream>
using namespace std;

int main()
{
  int t, n;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cin >> n;
    int rem;
    if (n == 0)
    cout << 0;
    while (n != 0)
    {
      rem = n % 10;
      cout << rem << " ";
      n /= 10;
    }
    cout << endl;
  }
  return 0;
}