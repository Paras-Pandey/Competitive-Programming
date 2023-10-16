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

    vector<vector<int>> s(n, vector<int>(m));
    go(i, 0, n-1) {
        char c;
        go(j, 0, m-1) {
            cin>>c;
            if(c=='E')
                s[i][j] = 0;
            else    
                s[i][j] = 1;
        }
    }
    int x = -1, y = -1;
    for(int i=0; i<n; i++) {
        if(x!=-1)
            break;
        for(int j=0; j<m; j++) {
            if(s[i][j]==1) {
                x = i, y = j;
                break;
            }
        }
    }
    if(x==-1 and y==-1)
        cout<<"NO"<<endl;
    else if(x==0 and y==0)
        cout<<"YES"<<endl;
    else {
        for(int i=0; i<y; i++) {
            for(int j=0; j<n; j++) {
                if(s[j][i]==1) {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
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