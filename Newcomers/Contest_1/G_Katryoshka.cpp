#include <iostream>
using namespace std;

int main()
{
  long long eyes, mouths, bodies, res = 0;

  cin >> eyes >> mouths >> bodies;
  long long minOf = min(eyes, min(mouths, bodies));

  res += minOf;
  eyes -= res;
  mouths -= res;
  bodies -= res;

  minOf = min(eyes/2, bodies);
  res += minOf;

  cout << res << endl;
  
  return 0;
}