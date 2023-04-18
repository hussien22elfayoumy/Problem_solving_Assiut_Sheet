#include <iostream>
using namespace std;

int main()
{
  int n;
  while (n != 1999)
  {
    cin >> n;
    if (n == 1999)
    cout << "Correct" << endl;
    else
    cout << "Wrong" << endl;
  }
  return 0;
}