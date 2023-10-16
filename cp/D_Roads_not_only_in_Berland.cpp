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

class DSU {
    public:
    vector<int> par, size;

    DSU(int n) {
        for(int i=0; i<n; i++) { 
            par.push_back(i);
            size.push_back(0);
        }
    }

    int findpar(int n) {
        if(par[n]==n)
            return n;
        return par[n] = findpar(par[n]);
    }

    void union_(int u, int v) {
        int paru = findpar(u), parv = findpar(v);

        if(paru!=parv) {
            if(size[paru]>size[parv]) {
                par[parv] = paru;
                size[paru] += size[parv];
            }
            else {
                par[paru] = parv;
                size[parv] += size[paru]; 
            }
        }
    }
};

void solve() {
    int n, x, y;
    cin>>n;
    
    DSU dsu(n+1);
    vector<pair<int, int>> edges;
    go(i, 1, n) {
        cin>>x>>y;
        edges.push_back({x, y});
    }

    vector<pair<int, int>> oldroads;
    for(auto it: edges) {
        if(dsu.findpar(it.first)==dsu.findpar(it.second))
            oldroads.pb(it);
        else {
            dsu.union_(it.first, it.second);
        }
    }


    set<int> comp;
    go(i, 1, n) {
        comp.insert(dsu.findpar(i) );
    }

    if(comp.size()==1)  {
        cout<<0<<endl;
        return;
    }

    vector<int> newroads(all(comp));

    cout<<newroads.size()-1<<endl;
    go(i, 0, newroads.size()-2) {
        cout<<oldroads[i].first<<" "<<oldroads[i].second<<" "<<newroads[i]<<" "<<newroads[i+1]<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}