#include <bits/stdc++.h>
using namespace std;
double avg(double arr[], int n)
{
  double sum = 0.0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum / n;
}
int main()
{
  int n;
  cin >> n;
  double arr[n];
  for (int i = 0; i < n;i++)
  cin >> arr[i];
  cout << fixed << setprecision(7) <<avg(arr, n) << endl;
  return 0;
}