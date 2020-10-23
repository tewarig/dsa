#include <iostream>
using namespace std;


void merge(int arr[], int first, int middle, int last) {
  int tempNum = middle - first + 1;
  int tempNum1 = last - middle ;
  int tempArr[tempNum];
  int tempArr1[tempNum1];
  for (int i = 0; i < tempNum; i++)
  {
    tempArr[i] = arr[first + i];
  }
  for (int i = 0; i < tempNum1; i++)
  {
    tempArr1[i] = arr[middle + 1 + i];
  }
  int i = 0;
  int j = 0;
  int k = first;
  while (i < tempNum && j < tempNum1) {
    if (tempArr[i] <= tempArr1[j])
    {
      arr[k] = tempArr[i];
      i++;
    } else {
      arr[k] = tempArr1[j];
      j++;
    }
    k++;
  }
  while (j < tempNum1)
  {
    arr[k] = tempArr1[j];
    j++;
    k++;
  }
  while (i < tempNum)
  {
    arr[k] = tempArr[i];
    i++;
    k++;
  }


}

void mergeSort(int arr[], int first, int last) {
  if (first < last)
  {
    int middle = (first + last ) / 2;
    mergeSort(arr, first, middle);
    mergeSort(arr, middle + 1, last);
    merge(arr, first, middle, last);

  }

}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt" , "r" , stdin);
  freopen("output.txt", "w" , stdout);
#endif
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\n";
  }

  return 0;
}
