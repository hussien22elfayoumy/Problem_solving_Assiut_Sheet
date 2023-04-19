#include <iostream>
using namespace std;

int main()
{
  int a, b;
  while (true)
  {
    cin >> a >> b;
    if (a <= 0 || b <= 0)
    return 0;
    int sum = 0;
    int minn = min(a, b);
    int maxx = max(a, b);
    for (int i = minn; i <= maxx; i++)
    {
      cout << i << " ";
      sum += i;
    }
    cout << "sum =" << sum << endl;
  }
  return 0;
}