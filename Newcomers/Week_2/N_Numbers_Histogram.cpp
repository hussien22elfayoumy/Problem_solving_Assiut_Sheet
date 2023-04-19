#include <iostream>
using namespace std;

int main()
{
  int t, n;
  char s;
  cin >> s >> t;

  for (int i = 1; i <= t ; i++)
  {
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
      cout << s;
    }
    cout << endl;
  }
  return 0;
}