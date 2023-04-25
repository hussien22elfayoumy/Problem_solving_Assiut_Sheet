#include <iostream>
using namespace std;

int main()
{
  int n, x, xIndx;
  cin >> n;
  int arr[n];
  
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (x == arr[i])
    {
      xIndx = i;
      break;
    }
    else
    xIndx = -1;
  }
  cout << xIndx << endl;
  return 0;
}