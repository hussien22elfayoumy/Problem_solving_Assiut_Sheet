#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 1)
    {
      cout << "0" << endl;
      return 0;
    }
  }
  int count = 0;
  while (true)
  {
    int evenCount = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
        evenCount++;
      arr[i] /= 2;
    }
    if (evenCount == n)
      count++;
    else
      break;
  }
  cout << count << endl;
  return 0;
}