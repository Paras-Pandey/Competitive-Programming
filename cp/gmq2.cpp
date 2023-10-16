#include"bits/stdc++.h"
using namespace std;

#define go(i, s, n)         for (int i=(s), end=(n); i<=end; i++)
#define rgo(i, s, n)        for (int i=(s), end=(n); i>=n; i--)
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define all(x)              (x).begin(), (x).end()
#define sz(x)               (int)((x).size())
#define fr                  first
#define sc                  second
#define mem1(a)             memset(a, -1, sizeof(a))
#define mem0(a)             memset(a, 0, sizeof(a))
#define int                 long long
typedef unsigned long long  llu;
#define endl                "\n"
const int MOD = 1000000007;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

template<typename T, typename T1> T amax(T &a, T1 b) {if(b>a) a = b; return a;};
template<typename T, typename T1> T amin(T &a, T1 b) {if(b<a) a = b; return a;};
const long long INF = 1e18;

const int N = 0;

int dp[1005][106];
int sol(int i, int j, int i1, int i2) {
    if(i == i1 and j == i2)
        return 0;
    if(i > i1 || j > i2)
        return 1e6;

    if(dp[i][j] != -1)
        return dp[i][j];
    int res = 1e6;
    if(i + j <= i2)
        res = min(res, 1 + sol(i, j + i, i1, i2));
    if(i + j <= i1)
        res = min(res, 1 + sol(i + j, j, i1, i2));
    return dp[i][j] = res;
}

int minsteps(int input1, int input2) {
    memset(dp, -1, sizeof(dp));
    int ans = sol(1, 1, input1, input2);
    return ans >= 1e6 ? -1 : ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        cout<<minsteps(2, 2)<<endl;
    }
    return 0;
}