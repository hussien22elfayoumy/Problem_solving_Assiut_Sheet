#include <iostream>
using namespace std;

int main()
{
  long long a, b;

  cin >> a >> b;
  if (a % b == 0)
    cout << "Multiples\n";
  else if (b % a == 0)
    cout << "Multiples\n";
  else
    cout << "No Multiples\n";

  return 0;
}