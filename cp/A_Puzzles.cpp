#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[m];

    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+m);
    int mindif = INT_MAX;
    for(int i=0; i<=m-n; i++)
    {
        mindif = min(mindif, abs(arr[i]-arr[i+n-1]));
    }
    cout<<mindif;
}