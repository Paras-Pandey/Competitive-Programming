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

int n, k;

bool comp(pair<int, int> &a, pair<int, int> &b) {
    if(k/(a.second-a.first) - a.second/a.first == k/(b.second-b.first) - b.second/b.first)
        return a.first > b.first;
    return k/(a.second-a.first) - a.second/a.first > k/(b.second-b.first) - b.second/b.first;
}
const int N = 0;
void solve() {
    cin>>n>>k;

    vi arr(n), brr(n);
    int mn = INT_MAX;
    for(auto &i: arr)
        cin>>i;
    for(auto &i: brr)
        cin>>i;
    
    vector<pair<int, int>> newds;

    go(i, 0, n) {
        newds.pb({brr[i], arr[i]});
    }

    int ans = 0;
    sort(all(newds), comp);

    int prevk = k;
    while(1) {
        prevk = k;
        go(i, 0, n) {
            if(k>=newds[i].second) {
                ans += (k-newds[i].second)/(newds[i].second - newds[i].first) + 1;
                k = newds[i].first;
            }
        }
        if(prevk==k)
            break;
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