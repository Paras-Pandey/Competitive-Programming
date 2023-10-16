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

void solve() {
    int n;
    cin>>n;

    vi arr(n);
    for(auto &i: arr)
        cin>>i;

    if(n==2) {
        cout<<"YES"<<endl;
        return;
    }    
    vi odd, even;
    for(auto i: arr) {
        if(i%2)
            odd.pb(i);
        else
            even.pb(i);
    }

    sort(all(odd));
    sort(all(even));
    if(odd[0]==odd[n/2-1] and even[0]==even[n/2-1]) {
        cout<<"YES"<<endl;
        return;
    }
    int midod = odd[n/4-1], midev = even[n/4 - 1], oddop = 0, evenop = 0;

    for(auto i: odd) {
        oddop += (midod-i);
    }
    for(auto i: even) {
        evenop += (i-midev);
    }
    if(oddop == -1*evenop || (abs(oddop - evenop)/2)%(n/2)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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