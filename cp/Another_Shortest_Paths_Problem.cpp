#include"bits/stdc++.h"
using namespace std;

int solve(int n, int m, int x, int y)
{
    unsigned long long dp[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dp[i][j] = 10000;
        }
    }
    dp[1][1] = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dp[i][j] = min(dp[i-1][j]+x, min(dp[i][j-1]+x, min(dp[i-1][j-1]+y, dp[i][j])));
        }
    }
    return dp[n][m];
}
int main()
{
    int t;
    cin>>t; 

    int n, m, x, y;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        cout<<solve(n, m, x, y)<<endl;
    }
}