#include"bits/stdc++.h"
using namespace std;

int dp[100000][27];

int sol(string &s, int i, int ln) {
    if(i == s.length() and ln <= 26)
        return 1;
    if(ln > 26)
        return 0;
    if(dp[i][ln] != -1)
        return dp[i][ln];
    if(ln > 0) {
        dp[i][ln] = sol(s, i + 1, ln * 10 + (s[i] - '0')) + sol(s, i + 1, (s[i] - '0'));
        return dp[i][ln];
    }
    dp[i][ln] = sol(s, i + 1, (s[i] - '0'));
    return dp[i][ln];
}

int main() {
    string s;
    cin>>s;

    memset(dp, -1, sizeof(dp));
    cout<<sol(s, 0, 0);
}