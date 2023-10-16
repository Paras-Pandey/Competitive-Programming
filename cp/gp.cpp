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
        vector<int> par, rank;
        
        DSU(int n) {
            par.resize(n + 1, 0);
            for(int i = 1; i <= n; i++) {
                par[i] = i;
            }

            rank.resize(n + 1, 1);
        }

        int fpar(int n) {
            if(par[n] != n)
                par[n] = fpar(par[n]);
            return par[n];
        }

        void _union(int u, int v) {
            int pu = fpar(u);
            int pv = fpar(v);

            if(pu != pv) {
                if(rank[pu] > rank[pv]) {
                    par[pv] = pu;
                    rank[pu] += rank[pv];
                }
                else {
                    par[pu] = pv;
                    rank[pv] += rank[pu];
                }
            }
        }
};

vector<int> terrorist(int n, int m, vector<vector<int>> &v) {
    vector<int> adj[n + 1];

    for(int i = 0; i < m; i++) {
        if(v[i][0] < v[i][1])
            adj[v[i][0]].push_back(v[i][1]);
        else
            adj[v[i][1]].push_back(v[i][0]);
    }

    DSU* dsu = new DSU(n);
    int ccomp = 0;
    vector<int> ans;
    ans.push_back(0);
    
    for(int i = n; i > 1; i--) {
        ccomp++;
        for(auto j: adj[i]) {
            int pj = dsu -> fpar(j);
            int pi = dsu -> fpar(i);
            if(pj != pi) {
                ccomp--;
                dsu -> _union(pj, pi);
            }
        }

        ans.push_back(ccomp);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        vector<vector<int>> v = {{1, 2}, {1, 5}, {1, 4}, {2, 3}, {2, 4}, {3, 5}, {3, 6}}; 
        vector<int> ans = terrorist(6, 7, v);

        for(auto i: ans)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}