#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n, l;
    cin>>n>>l;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int maxdif = 0;
    maxdif = 2*(arr[0]-0);
    for(int i=0; i<n-1; i++)
    {
        maxdif = max(maxdif, arr[i+1]-arr[i]);
    }
    maxdif = max(maxdif, 2*(l-arr[n-1]));
    cout<<fixed<<setprecision(10)<<maxdif/2.0;
}