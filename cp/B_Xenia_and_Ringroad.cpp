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
    unsigned long long int ans = 0;
    ans += arr[0]-1;
    for(int i=1; i<m; i++)
    {
        if(arr[i]>arr[i-1])
        {
            ans += arr[i] - arr[i-1];
        }
        else if(arr[i]<arr[i-1])
        {
            ans += arr[i] + n-arr[i-1];
        }
    }
    cout<<ans;
}