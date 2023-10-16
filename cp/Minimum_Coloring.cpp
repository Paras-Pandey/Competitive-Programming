#include"bits/stdc++.h"
using namespace std;

#define FOR(i, s, n)           for (int i=s; i<n; i++)
#define getstr              getline (cin,str)
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define all(x)              (x).begin, (x).end()
#define sz(x)               (int)((x).size())
#define fr                  first
#define sc                  second
#define mem1(a)             memset(a, -1, sizeof(a))
#define mem0(a)             memset(a, 0, sizeof(a))
#define int                 long long
#define vi                  vector <int>
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

int n, m;
int getmaxval(vector<vector<int>> & ans, int i, int j) {
    vi v = {-1, 0, 1, 0, -1};
    vi minval;
    FOR(k, 0, 4) {
        if(i+v[k]<=n and j+v[k+1]<=m and i+v[k]>0 and j+v[k+1]>0) {
            minval.pb(ans[i+v[k]][j+v[k+1]]);
        }
    }
    FOR(k, 1, 6) {
        bool check = true;
        for(auto l: minval) {
            if(k-l==0)
                check = false;
        }
        if(check)
            return k;
    }
}
void dfs(vector<vector<int>> & ans, int i, int j, vector<vector<int>> & vis) {
    vis[i][j] = 1;
    vi v = {-1, 0, 1, 0, -1};

    FOR(k, 0, 4) {
        if(i+v[k]<=n and j+v[k+1]<=m and i+v[k]>0 and j+v[k+1]>0 and vis[i+v[k]][j+v[k+1]]==0) {
            ans[i+v[k]][j+v[k+1]] = getmaxval(ans, i+v[k], j+v[k+1]);
            dfs(ans, i+v[k], j+v[k+1], vis);
        }
    }
}
void solve() {
    cin>>n>>m;

    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    vector<vector<int>> ans(n+1, vector<int>(m+1));
    ans[x1][y1] = 1, ans[x2][y2] = 2;

    vector<vector<int>> vis(n+1, vector<int>(m+1));
    vis[x2][y2] = 1;
    dfs(ans, x1, y1, vis);

    FOR(i, 1, n+1) {
        FOR(j, 1, m+1)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
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