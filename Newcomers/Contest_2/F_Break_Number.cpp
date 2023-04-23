#include <iostream>
using namespace std;

int main()
{
  int t, temp = 0;
  long long n;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    cin >> n;
    int count = 0;
    while (n != 0)
    {
      if (n % 2 == 0)
      count++;
      else if (n % 2 != 0)
      break;
      n /= 2;
    }
    if (count > temp)
    temp = count;
  }
  cout << temp << endl;
  return 0;
}