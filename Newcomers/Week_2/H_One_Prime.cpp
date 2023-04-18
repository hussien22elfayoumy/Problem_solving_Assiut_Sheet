#include <iostream>
using namespace std;

int main()
{
  int n;
  int check = 0;
  cin >> n;
  if (n == 1)
  check = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    check = 1;
  }
  if (check == 0 || n == 2)
  cout << "YES" << endl;
  else if (check == 1)
  cout << "NO" << endl;
  return 0;
}