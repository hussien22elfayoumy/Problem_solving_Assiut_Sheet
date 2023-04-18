#include <iostream>
using namespace std;

int main()
{
  int n, x, oddCnt = 0, evenCnt = 0, posCnt = 0, negCnt = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (x % 2 == 0)
    evenCnt++;
    else
    oddCnt++;
    if (x > 0)
    posCnt++;
    else if (x < 0)
    negCnt++;
  }
  cout << "Even: " << evenCnt << endl;
  cout << "Odd: " << oddCnt << endl;
  cout << "Positive: " << posCnt << endl;
  cout << "Negative: " << negCnt << endl;
  return 0;
}