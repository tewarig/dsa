//selection sort


#include <iostream>
using namespace std;


void selection_sort(int arr[],int n)
{
    int i =0,j=0,min=0,pos=0;
    for(i;i<n-1;i++)
    {
        min = arr[i];
        pos = i;
        
        for(j=i+1;j<n;j++)
        {
           if(arr[j]<min)
           {
               min= arr[j];
               pos = j;
               
           }
        }
        if(pos != i)
        {
            arr[pos] = arr[i];
            arr[i] = min;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
