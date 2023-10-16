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
    int n, k;
    cin>>n>>k;

    vi arr(n - 1);
    go(i, 0, n-2)
        cin>>arr[i];

    if(k == 0) {
        go(i, 0, n-1)
            cout<<0;
        cout<<endl;
        return;
    }

    unordered_set<int> leave, par;
    go(i, 2, n)
        leave.insert(i);

    for(auto i: arr)
        leave.erase(i), par.insert(i);
    
    vi ans(n + 1, 0);
    for(auto i: leave) {
        ans[i] = 1;
        ans[arr[i - 2]]++;
        k--;
        if(k == 0)
            break;
    } 

    for(auto i: par) {
        if(k > 0) {
            if(ans[i] % 2)
                ans[i] = 1;
            else {
                ans[i + 1] = 0;
                if(i > 1) 
                    ans[arr[i - 2]]++;
            }
        }
        else {
            if(ans[i + 1] % 2) {
                ans[i] = 0;
                if(i > 1) 
                    ans[arr[i - 2]]++;
            }
            else
                ans[i] = 1;
        }
    }

    go(i, 1, n)
        cout<<ans[i];
    cout<<endl;
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