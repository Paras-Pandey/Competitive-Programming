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

const int N = 500005;
const int mod = 1e9+7;
int par[N], rank_[N];

int find_par(int n) {
    if(par[n]!=n)
        par[n] = find_par(par[n]);
    return par[n];
}

void union_(int a, int b) {
    int u = find_par(a), v = find_par(b);
    if(u!=v) {
        if(rank_[u]>=rank_[v]) {
            rank_[u]++;
            par[v] = u; 
        }
        else {
            rank_[v]++;
            par[u] = v;
        }
    }
}

void solve() {
    int n;
    cin>>n;

    go(i, 1, n+1) {
        par[i] = i;
    }
    go(i, 1, n+1)
        rank_[i] = 0;
    vi arr(n), brr(n), crr(n);
    for(auto &i: arr)
        cin>>i;
    for(auto &i: brr)
        cin>>i;
    
    go(i, 0, n) {
        union_(arr[i], brr[i]);
    }

    unordered_map<int, int> pot;
    go(i, 0, n) {
        pot[find_par(arr[i])] = 1;
    }
    go(i, 0, n) {
        cin>>crr[i];
        if(crr[i]!=0) {
            pot.erase(find_par(crr[i]));
        }
        if(arr[i]==brr[i]) {
            pot.erase(find_par(arr[i]));
        }
    }


    int res = 1;
    for(auto i: pot) {
        res *= 2;
        res %= mod;
    }

    cout<<res<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}