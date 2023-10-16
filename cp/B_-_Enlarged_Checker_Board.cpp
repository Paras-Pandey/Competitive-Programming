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

void pri(string &x, int n) {
    go(i, 0, n) {
        for(auto j: x) 
            cout<<j;
        cout<<endl;
    }
}

void solve() {
    int a, b, c;
    cin>>a>>b>>c;

    string s = "";
    for(int i=0; i<a; i++) {
        go(i, 0, c)
            s += '.';
        i++;
        if(i==a)
            break;
        go(i, 0, c)
            s += '#';
    }
    string rs = "";
    for(int i=0; i<a; i++) {
        go(i, 0, c)
            rs += '#';
        i++;
        if(i==a)
            break;
        go(i, 0, c)
            rs += '.';
    }

    int d = 1;
    for(int i=0; i<a; i++) {
        if(d)
            pri(s, b);
        else
            pri(rs, b);
        d = 1-d;
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