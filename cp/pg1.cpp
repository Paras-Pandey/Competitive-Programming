#include<bits/stdc++.h>
using namespace std;

int dp[1000005];
int mod = 1e9 + 7;

long long sol(int n) {
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = (2ll * (sol(n - 1) + sol(n - 2))) % mod;
}

int main() {
    memset(dp, -1, sizeof dp);

    int n;
    cin>>n;

    cout<<((sol(n - 1) + sol(n - 2)) % mod)<<endl;
}