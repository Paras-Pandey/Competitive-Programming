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
    int n;
    cin>>n;
    string s;
    cin>>s;

    bool sm = 0, c = 0, sp = 0, d = 0; 
    go(i, 0, n-1) {
        if(s[i]>='a' and s[i]<='z')
            sm = 1;
        else if(s[i]>='A' and s[i]<='Z')
            c = 1;
        else if(s[i]>='0' and s[i]<='9')
            d = 1;
        else
            sp = 1;
    }
    if(!sm) {
        s += 'a';
        n++;
    }
    if(!c) {
        s += 'A';
        n++;
    }
    if(!d) {
        s += '1';
        n++;
    }
    if(!sp) {
        s += '@';
        n++;
    }
    while(n<7) {
        s += '1';
        n++;
    }
    cout<<"Case #"<<k<<": "<<s<<endl;
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