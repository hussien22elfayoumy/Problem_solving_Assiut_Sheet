#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a = -1;
  int b = 1;
  int temp;
  for (int i = 1; i <= n; i++)
  {
    temp = a + b;
    a = b;
    b = temp;
    cout << temp << " ";
  }
  cout << endl;
  return 0;
}