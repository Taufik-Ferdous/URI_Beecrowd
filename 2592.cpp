#include "iostream"
using namespace std;

bool isSorted(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (*(arr + (i + 1)) < *(arr + i))
      return false;
  }
  return true;
}

int main()
{
  int count = 1;

  while (true)
  {
    int n;

    cin >> n;
    if (n == 0)
      return 0;

    while (true)
    {

      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }

      if (isSorted(arr, n))
      {
        break;
      }
      else
        count++;
    }
    cout << count << endl;
    count = 1;
  }

  return 0;
}