#include <iostream>
using namespace std;

int main()
{
  long long t, a, b;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cin >> a >> b;
    long long minn = min(a, b) - 1;
    long long maxx = max(a, b);
    maxx = maxx * (maxx + 1) / 2;
    minn = minn * (minn + 1) / 2;
    long long result = maxx - minn;
    cout << result << endl;
  }
  return 0;
}