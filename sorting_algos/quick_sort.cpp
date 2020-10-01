#include <bits/stdc++.h>
using namespace std;

void input_Array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void swap_Elements(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int pviot_Fun(int arr[], int min, int max)
{
    int pivot = arr[max];
    int i = (min - 1);

    for (int j = min; j <= max - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap_Elements(&arr[i], &arr[j]);
        }
    }
    swap_Elements(&arr[i + 1], &arr[max]);
    return (i + 1);
}

void quick_Sort(int arr[], int min, int max)
{
    if (min < max)
    {
        int pi = pviot_Fun(arr, min, max);
        quick_Sort(arr, min, pi - 1);
        quick_Sort(arr, pi + 1, max);
    }
}

void display_Array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    input_Array(arr,n);
    quick_Sort(arr, 0, n - 1);
    cout << "Sorted array \n";
    display_Array(arr, n);
    return 0;
}