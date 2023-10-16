#include"bits/stdc++.h"
using namespace std;

#define FOR(i, s, n)           for (int i=s; i<n; i++)
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define all(x)              (x).begin, (x).end()
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
    int k, n;
    cin>>n>>k;

    vector<int> cost(n);
    FOR(i, 0, n)    cin>>cost[i];

    sort(cost.begin(), cost.end());
    int spend = 0, items = 0;
    FOR(i, 0, n) {
        if(spend+cost[i]>k) {
            if((cost[i]+1)/2+spend<=k)
                items++, spend+=(cost[i]+1)/2;
            else {
                cout<<items<<endl;
                return;
            }
        }
        else
            items++, spend+=cost[i];
    }
    cout<<items<<endl;
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