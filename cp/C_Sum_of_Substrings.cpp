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
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    bool simp = 0, limp = 0;
    if(s[n-1]=='1')
        simp = 1;
    if(s[0]=='1')
        limp = 1;

    int ans = 0;
    go(i, 1, n-1) {
        ans += (s[i-1]-'0')*10 + (s[i]-'0');
    }
    if(!simp) {
        int i;
        for(i=n-2; i>=0; i--) {
            if(s[i]=='1')
                break;
        }
        if(i!=-1 and n-1-i<=k) {
            if(i!=0)
                ans -= 10;
            else
                ans -= 9;
            swap(s[n-1], s[i]);
            k -= n-1-i;
        }
    }
    if(!limp) {
        int i;
        for(i=0; i<n-1; i++) {
            if(s[i]=='1')
                break;
        }
        if(i!=n-1 and i<=k) {
            ans -= 1;
            k -= i;
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