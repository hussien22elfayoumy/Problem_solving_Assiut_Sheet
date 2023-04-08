#include <iostream>
using namespace std;

int main()
{
  float n;

  cin >> n;
  int intN = n;

  if (n == intN)
  cout << "int " << intN << endl;
  else
  {
    cout << "float " << intN << " " << n - intN << endl;
  }
  return 0;
}