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

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int>(m));
    go(i, 0, n-1) {
        go(j, 0, m-1) {
            cin>>arr[i][j];
        }
    }

    int tsm = 0, ans = 0;
    go(i, 0, n-1) {
        go(j, 0, m-1) {
            tsm = arr[i][j];
            for(int k=1; k<max(n, m); k++) {
                if(j+k<m and i+k<n)
                    tsm += arr[i+k][j+k];
                if(j-k>=0 and i-k>=0) 
                    tsm += arr[i-k][j-k];
                if(j-k>=0 and i+k<n) 
                    tsm += arr[i+k][j-k];
                if(j+k<m and i-k>=0)
                    tsm += arr[i-k][j+k];
            }
            ans = max(ans, tsm);
        }
    }

    cout<<ans<<endl;
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