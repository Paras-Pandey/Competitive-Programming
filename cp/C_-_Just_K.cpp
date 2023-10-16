#include"bits/stdc++.h"
using namespace std;

#define go(i, s, n)         for (int i=s; i<n; i++)
#define rgo(i, s, n)        for (int i=s; i>=n; i--)
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
int n, k, ans = 0;

int sol(vector<string> &s) {
    unordered_map<int, int> mp;

    for(auto i: s) {
        for(auto j: i)
            mp[j-'a']++;
    }

    int cnt = 0;
    go(i, 0, 26) {
        if(mp[i]==k)
            cnt++;
    }

    return cnt;
}

void solve() {
    cin>>n>>k;

    vector<string> v(n);
    for(auto &i: v)
        cin>>i;
    int N = v.size();
    for (int b = 0; b < (1<<N); b++) {
        vector<string> subset;
        for (int i = 0; i < N; i++)
            if (b&(1<<i)) subset.pb(v[i]);
        
        amax(ans, sol(subset));
    }

    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}