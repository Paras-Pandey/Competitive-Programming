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

const int N = 1e5+10;

double dp[N];

// bool comp(pair<int, int> a, pair<int, int> b) {
//     if(a.first==b.first)
//         return a.second > b.second;
//     return a.first < b.first;
// }

void solve() {
    int n;
    cin>>n;

    vi arr(n), brr(n);
    for(auto &i: arr)
        cin>>i;
    for(auto &i: brr)
        cin>>i;

    vector<vi> crr;
    go(i, 0, n) {
        crr[brr[i]].pb(arr[i]);
    }
    
    int nt = 0, pt = 0, nsum = 0, psum = 0;

    mem0(dp);
    multiset<int> pq;

    go(i, 1, n+1) {
        for(auto &j: crr[i-1])
            pq.insert(j);
        if(pq.size()) {
            dp[i] = dp[i-1];
            auto del = pq.end();
            del--;
            dp[i] += *del;
            pq.erase(del);
        }
        else
            break;
    }

    cout<<1<<endl;
    double ans = 0;

    go(i, 1, n+1) {
        cout<<dp[i]<<endl;
        amax(ans, dp[i]/i);
    } 

    cout<<fixed<<setprecision(6)<<ans<<endl;
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

