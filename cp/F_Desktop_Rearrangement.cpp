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

int sol(int cnt, vector<vector<int>> &presum, int n, int m) {
    int res = 0;

    int cfil = cnt/n, rem = cnt%n;
    for(int i=1; i<=cfil; i++) {
        res += presum[n][i];
    }
    res += presum[rem][cfil+1];
    res = cnt - res;

    return res;
}

void solve() {
    int n, m, q;
    cin>>n>>m>>q;

    vector<vector<char>> grid(n+1, vector<char>(m+1));
    int cnt = 0;
    vector<vector<int>> val(n+1, vector<int>(m+1, 0));
    vector<vector<int>> presum(n+5, vector<int>(m+5, 0));

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>grid[i][j];
            if(grid[i][j]=='*') {
                val[i][j] = 1;
                cnt++;
            }
        }
    }

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            presum[j][i] = presum[j-1][i] + val[j][i];
        }
    }
    
    int x, y;
    while(q--) {
        cin>>x>>y;
        if(grid[x][y]=='.') {
            grid[x][y] = '*';
            val[x][y] = 1;
            cnt++;
            for(int i=x; i<=n; i++) {
                presum[i][y] = val[i][y] + presum[i-1][y];
            }
        }
        else {
            grid[x][y] = '.'; 
            val[x][y] = 0;
            cnt--;
            for(int i=x; i<=n; i++) {
                presum[i][y] = val[i][y] + presum[i-1][y];
            }
        }
        cout<<sol(cnt, presum, n, m)<<endl;
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