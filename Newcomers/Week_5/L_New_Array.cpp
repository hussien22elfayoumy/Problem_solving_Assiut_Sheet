#include <bits/stdc++.h>
using namespace std;
void print(int arr1[], int arr2[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr2[i] << " ";
  for (int i = 0; i < n; i++)
    cout << arr1[i] << " ";
}
int main()
{
  int n;
  cin >> n;
  int arrA[n];
  int arrB[n];
  for (int i = 0; i < n; i++)
    cin >> arrA[i];
  for (int i = 0; i < n; i++)
    cin >> arrB[i];
  print(arrA, arrB, n);
  return 0;
}