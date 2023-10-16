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

    vi arr(n-1);
    unordered_map<int, int> mp;

    for(auto &i: arr) {
        cin>>i;
        mp[i]++;
    }
    
    vi cust;
    int time = 0, ans = 0;
    for(auto i: mp) {
        cust.pb(i.second);
        time++;
    }

    sort(all(cust), greater<int>());
    time++;
    ans += time;

    for(auto &i: cust) {
        i-=time;
        time--;
    }
    time = 0;
    int i = 0, nz = cust.size();
    sort(all(cust), greater<int>());

    while(i<nz) {
        if(cust[i]<=0) {
            i++;
            continue;
        }
        time += (cust[i]+1)/2;
        cust[i] -= 2*((cust[i]+1)/2);

        if(cust[i]<0 and i+1<nz)
            cust[i+1]--;

        ans += time;
        for(auto &j: cust) {
            j-=time;
        }
        time = 0;
        i++;
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