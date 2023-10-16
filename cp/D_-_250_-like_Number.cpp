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

const int N = 1e6+5;
int primes[N];


void solve(vector<int> &res) {
    int n;
    cin>>n;

    int togo = cbrt(n);
    for(int i=2; i<togo; i++) {
        for(int j=togo)
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int n = sizeof(primes)/4;
    for(int i=2; i<n; i++)
        primes[i] = 1;
    for(int i=2; i*i<=n; i++) {
        if(primes[i]==0)
            continue;
        for(int j=i*i; j<=n; j+=i) {
            primes[j] = 0;
        }
    }

    vector<int> res;
    for(int i=2; i<n; i++) {
        if(primes[i])
            res.pb(i);
    }
    int t=1;
    //cin>>t;
    while(t--) {
        solve(res);
    }
    return 0;
}