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

    vi arr(n);
    go(i, 0, n-1) {
        cin>>arr[i];
    }

    int pgcd = arr[0], sgcd = arr[n-1];
    vi prefix(n), suffix(n);
    prefix[0] = arr[0];
    suffix[n-1] = arr[n-1];
    go(i, 1, n-1) {
        pgcd = __gcd(pgcd, arr[i]);
        sgcd = __gcd(sgcd, arr[n-1-i]);
        prefix[i] = pgcd;
        suffix[n-1-i] = sgcd;
    }

    if(pgcd > 1) {
        cout<<n<<endl;
    }
    else {
        int cnt = 0;
        if(prefix[n-2] > 1) {
            cnt++;
        }
        if(suffix[1] > 1) {
            cnt++;
        }
        for(int i=1; i<n-1; i++) {
            if(__gcd(prefix[i-1], suffix[i+1]) > 1) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
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