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

int n;
vector<bool> visited;
vector<int> ans;

void dfs(int v, vector<int> adj[]) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u, adj);
    }
    ans.push_back(v);
}

void topological_sort(vector<int> adj[]) {
    visited.assign(n, false);
    ans.clear();
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i, adj);
    }
    reverse(ans.begin(), ans.end());
}

void solve() {
    cin>>n;

    int m;
    cin>>m;

    unordered_map<int, set<int>> mp;
    vector<int> adj[n + 1];
    for(int i = 0; i < m; i++) {
        int x, y;
        cin>>x>>y;

        mp[x].insert(y);
        adj[x].push_back(y);
    }

    topological_sort(adj);
    int fans = 0;

    for(int i = 0; i < ans.size(); i++) {
        int cd = 0;
        for(int j = i + 1; j < ans.size(); j++) {
            if(mp[ans[i]].find(ans[j]) != mp[ans[i]].end())
                cd = max(cd, 100 * (j - i));
        }
        fans += cd;
    }

    cout<<fans<<endl;
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