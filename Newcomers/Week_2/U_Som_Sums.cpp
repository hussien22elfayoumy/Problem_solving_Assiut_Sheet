#include <iostream>
using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int totalSum = 0;
  for (int i = 1; i <= n; i++)
  {
    int x = i;
    int sum = 0;
    while (x != 0)
    {
      int rem = x % 10;
      sum = sum + rem;
      x /= 10;
    }
    if (sum >= a && sum <= b)
    totalSum += i;
  }
  cout << totalSum << endl;
  return 0;
}