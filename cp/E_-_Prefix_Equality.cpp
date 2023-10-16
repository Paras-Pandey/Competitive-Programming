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

const int N = 1e5;
int pre1a[N], pre2a[N], pre1b[N], pre2b[N];

void solve() {
    int n;
    cin>>n;

    vi arr(n), brr(n);
    for(auto &i: arr)
        cin>>i;
    for(auto &j: brr)
        cin>>j;

    int q, a, b;
    cin>>q;

    while(q--) {
        cin>>a>>b;
        memset(pre1a, 0, sizeof(pre1a));
        memset(pre2a, 0, sizeof(pre2a));
        memset(pre1b, 0, sizeof(pre1b));
        memset(pre2b, 0, sizeof(pre2b));
        bool dod = 0;
        go(i, 0, a) {
            if(arr[i]<N)
                pre1a[arr[i]] = 1;
            else
                pre1a[arr[i]-N] = 1;
        }
        go(i, 0, b) {
            if(brr[i]<N) 
                pre2b[brr[i]] = 1;
            else
                pre2b[brr[i]-N] = 1;
        }
        go(i, 0, N){
            if(pre1a[i]^pre1b[i]) {
                dod = 1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(dod)
            continue;
        go(i, 0, N) {
            if(pre2a[i]^pre2b[i]) {
                dod = 1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(dod)
            continue;
        cout<<"Yes"<<endl;
    }
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