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

void solve(int i) {
    int n;
    cin>>n;

    vector<int> cap(n);
    for(int i = 0; i < n; i++) {
        cin>>cap[i];
    }

    vector<pair<int, int>> capp(n);
    for(int i = 0; i < n; i++) {
        capp[i] = {cap[i], i + 1};
    }

    sort(capp.begin(), capp.end());

    vector<int> adj[n + 1];
    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> canpass(n + 1, 1);
    vector<int> par(n + 1);
    iota(par.begin(), par.end(), 0);

    for(int i = 0; i < n; i++) {
        for(auto j: adj[capp[i].second]) {
            if(cap[j] < cap[capp[i].second]) {

                canpass[i] += canpass[j];
            }
        }
    }

    int ans = *max_element(canpass.begin(), canpass.end());
    cout<<"Case #"<<i<<": "<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    cin>>t;
    int i = 1;
    while(t--) {
        solve(i++);
    }
    return 0;
}