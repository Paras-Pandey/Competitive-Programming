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

int f(int n) {
    int cnt = 0;
    while(n%2==0) {
        cnt++;
        n /= 2;
    }

    return cnt;
}
void solve() {
    int n;
    cin>>n;

    vi arr(2*n);
    int co = 0, ce = 0;
    go(i, 0, 2*n-1) {
        cin>>arr[i];
        if(arr[i] % 2)
            co++;
        else
            ce++;
    }

    if(ce <= co) {
        cout<<(co - ce) / 2<<endl;
    }
    else {
        vi nor;
        go(i, 0, 2*n-1) {
            if(arr[i] % 2==0)
                nor.push_back(f(arr[i]));
        }

        sort(all(nor));
        int dif = (ce - co) / 2;
        int ans = 0;
        go(i, 0, dif-1)
            ans += nor[i];

        cout<<ans<<endl;
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