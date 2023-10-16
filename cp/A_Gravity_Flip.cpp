#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int maxh = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        maxh = max(maxh, arr[i]);
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}