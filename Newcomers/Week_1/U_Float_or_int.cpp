#include <iostream>
using namespace std;

int main()
{
  double n;

  cin >> n;
  int intN = int(n);

  if (n == intN)
  cout << "int " << intN << endl;
  else
  {
    cout << "float " << intN << " " << n - intN << endl;
  }
  return 0;
}