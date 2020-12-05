#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll_MAX 922337203685
#define pb  push_back

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int left = 0;
    int right = n;
    while (left <= right)
    {

        int middle = left + (right - left) / 2 ;
        if (arr[middle] == m)
        {
            cout << middle;
        }
        if (arr[middle] < m)
        {
            left = middle + 1;
        } else {
            right = middle - 1;
        }

    }

    return 0;



}
