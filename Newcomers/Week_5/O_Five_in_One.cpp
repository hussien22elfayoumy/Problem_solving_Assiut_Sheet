#include <bits/stdc++.h>
using namespace std;
int Max(int arr[], int n)
{
  int maxx = arr[0];
  for (int i = 0; i < n; i++)
    maxx = max(maxx, arr[i]);
  return maxx;
}
int Min(int arr[], int n)
{
  int minn = arr[0];
  for (int i = 0; i < n; i++)
    minn = min(minn, arr[i]);
  return minn;
}
int prime(int arr[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    int x = arr[i];
    bool check = true;
    if (arr[i] == 1)
      check = false;
    for (int j = 2; j * j <= arr[i]; j++)
    {
      if (x % j == 0)
        check = false;
      break;
    }
    if (check)
      count++;
  }
  return count;
}
int palindrome(int arr[], int n)
{
  int count = 0;
  bool check = true;
  for (int i = 0; i < n; i++)
  {
    int x = arr[i];
    int rev = 0;
    if (x < 10)
      count++;
    else
    {
      while (x != 0)
      {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
      }
      if (rev == arr[i])
        count++;
    }
  }
  return count;
}
int div(int arr[], int n)
{
  int maxx = 0;
	int temp = arr[0];
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    int x = arr[i];
    for (int j = 1; j < x / 2; j++)
    {
      if (x % j == 0)
        count++;
    }
    if (count >= maxx)
    {
      maxx = count;
      if (temp < arr[i])
        temp = arr[i];
    }
  }
  return temp;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "The maximum number : " << Max(arr, n) << endl;
  cout << "The minimum number : " << Min(arr, n) << endl;
  cout << "The number of prime numbers : " << prime(arr, n) << endl;
  cout << "The number of palindrome numbers : " << palindrome(arr, n) << endl;
  cout << "The number that has the maximum number of divisors : " << div(arr, n) << endl;
  return 0;
}