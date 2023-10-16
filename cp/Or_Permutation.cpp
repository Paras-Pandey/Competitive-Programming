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
    int n;
    cin>>n;

    vector<long long> arr(n), brr(n);
    unordered_map<int, int> mp;
    go(i, 0, n-1)
        cin>>arr[i];
    go(i, 0, n-1)
        cin>>brr[i];
    
    int x = 0, cnt = 0;
    go(i, 0, 31) {
        cnt = 0;
        go(j, 0, n-1) {
            if(((1ll)<<i) & brr[j])
                cnt++;
        }
        if(cnt==n)
            x += ((1ll)<<i);
    }

    go(i, 0, n-1)
        arr[i] |= x;

    sort(all(arr));
    sort(all(brr));

    go(i, 0, n-1) {
        if(arr[i]!=brr[i]) {
            cout<<-1<<endl;
            return;
        }
    }

    cout<<x<<endl;
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