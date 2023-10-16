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

int dp[10005][4];
int coins[4] = {1, 2, 5, 10};

int sol(int input1, int i) {
    if(i == 0)
        return (input1%coins[i] == 0);
    if(input1 == 0)
        return 1;
    if(input1 < 0)
        return 0;
    if(dp[input1][i] != -1)
        return dp[input1][i];
    int res = 0;
    if(input1 >= coins[i])
        res += sol(input1 - coins[i], i);
    res += sol(input1, i-1);
    return dp[input1][i] = res;
}

int numWays(int input1) {
    memset(dp, -1, sizeof(dp));
    return sol(input1, 3);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        int n;
        cin>>n;

        cout<<numWays(n);
    }
    return 0;
}