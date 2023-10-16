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

int sol(int n, int m) {
    return max((n+1)/2, max((m+1)/2, (n+m+2)/3));
}

void solve() {
    int n;
    cin>>n;

    vi arr(n);
    go(i, 0, n)
        cin>>arr[i];

    vi brr = arr;
    sort(all(brr));

    int ans = INT_MAX;
    amin(ans, (brr[0]+1)/2 + (brr[1]+1)/2);
    for(int i=0; i<n-1; i++)
        amin(ans, sol(arr[i], arr[i+1]));

    for(int i=1; i<n-1; i++) {
        amin(ans, min(arr[i+1], arr[i-1])+(abs(arr[i+1]-arr[i-1])+1)/2);
    }
    cout<<ans<<endl;
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