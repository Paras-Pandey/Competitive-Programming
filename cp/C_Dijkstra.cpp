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

const int N = 100005;
bitset<N> done;

void solve() {
    int n, m, x, y, z;
    cin>>n>>m;

    vector<pair<int, int>> adj[n+1];
    go(i, 1, m) {
        cin>>x>>y>>z;
        adj[x].pb({y, z});
        adj[y].pb({x, z});
    }
    vector<int> dis(n+1, LONG_MAX), par(n+1, 0);
    dis[1] = 0;
    par[1] = -1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1});
    
    while(!pq.empty()) {
        int node = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        done[node] = true;
        for(auto it: adj[node]) {
            if(!done[it.first] and dist + it.second < dis[it.first]) {
                dis[it.first] = dist + it.second;
                par[it.first] = node;
                pq.push({dist + it.second, it.first});
            }
        }
    }

    if(dis[n]==LONG_MAX) {
        cout<<-1;
        return;
    }
    int node = n;
    vector<int> ans;
    ans.pb(n);
    while(par[node]!=-1) {
        ans.pb(par[node]);
        node = par[node];
    }
    reverse(all(ans));
    for(auto i: ans)
        cout<<i<<" ";
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