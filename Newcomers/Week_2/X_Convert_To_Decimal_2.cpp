#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  short t;
  cin >> t;
  long long n;
  int rem;
  for (int i = 1; i <= t; i++)
  {
    int x = 0;
    cin >> n;
    while (n != 0)
    {
      rem = n % 2;
      if (rem == 1)
      {
        x++;
      }
      n /= 2;
    }
    int dec = 0;
    for (int j = 0; j < x; j++)
    {
      dec = dec + (1 * pow(2, j));
    }
    cout << dec << endl;
  }
  return 0;
}