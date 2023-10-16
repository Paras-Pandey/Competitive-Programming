#include"bits/stdc++.h"
using namespace std;

int arr[1000001];
long long int solve(int* arr, int maxv)
{
    long long int dp[maxv+1];
    memset(dp, 0, sizeof(dp));
    dp[1] = 1ll*arr[1]*1;
    dp[2] = max(arr[2]*1ll*2, dp[1]);
    for(int i=3; i<=maxv; i++)
    {
        dp[i] = max(1ll*dp[i-1], dp[i-2]+i*1ll*arr[i]);
    }
    return dp[maxv];
}
int main()
{
    int n;
    cin>>n;

    int x;
    memset(arr, 0, sizeof(arr));
    int maxv = 0;
    for(int i =0; i<n; i++)
    {
        cin>>x;
        arr[x]++;
        maxv = max(maxv, x);
    }
    cout<<solve(arr, maxv);
}
