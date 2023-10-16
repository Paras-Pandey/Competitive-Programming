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

const int N = 100000;
int arr[N];

bool perf(int n) {
    string no = to_string(n);
    int sum = 0;
    for(auto i: no) {
        sum += (i-'0');
    }
    if(sum==10)
        return true;
    return false;
}
void solve() {
    int n, cnt = 0;
    cin>>n;

    for(int i=19; cnt<n; i++) {
        if(perf(i)) {
            cnt++;
            if(cnt==n)
                cout<<i;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    // int cnt = 0, nodig = 0;
    // while(cnt<10000) {
    //     string temp = "";
    //     for(int i = 0; i<nodig; i++) {
    //         for()
    //     }
    // }
    while(t--) {
        solve();
    }
    return 0;
}