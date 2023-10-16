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

void solve(int k) {
    int n, q;
    cin>>n>>q;

    vector<int> adj[n + 1];
    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 0; i < q; i++) {
        int x;
        cin>>x;
    }

    queue<int> bfs;
    vector<int> vis(n + 1, 0);

    int cnt = 0;
    bfs.push(1);
    vis[1] = 1;

    while(bfs.size()) {
        int n = bfs.size();
        if(cnt + n > q)
            break;
        for(int i = 0; i < n; i++) {
            int fr = bfs.front();
            bfs.pop();
            for(auto j: adj[fr]) {
                if(vis[j])
                    continue;
                vis[j] = 1;
                bfs.push(j);
            }
        }
        cnt += n;
    }

    cout<<"Case #"<<k<<": "<<cnt<<endl;
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