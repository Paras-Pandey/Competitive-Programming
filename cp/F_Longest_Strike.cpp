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
    unordered_map<int, int> pre;

    vi arr(n), narr;
    
    go(i, 0, n-1) {
        cin>>arr[i];
        pre[arr[i]]++;
    }
    sort(all(arr));
    narr.pb(arr[0]);

    go(i, 1, n-1) {
        if(arr[i]!=arr[i-1])
            narr.pb(arr[i]);
    }

    int tsm = 0, anss = -1, anse = 0, ansl = 0, s = -1, e = 0;
    go(i, 0, narr.size()-1) {
        if((i>0 and narr[i]-narr[i-1]!=1) or pre[narr[i]]<k) {
            if(tsm==0)
                continue;
            if(tsm>ansl) {
                ansl = tsm;
                anss = s;
                anse = e;
            }
            else if(tsm==ansl) {
                if(anse - anss < e - s)
                    anss = s, anse = e;
            }
            s = -1;
            tsm = 0;
        }
        else {
            if(s==-1)
                s = narr[i];
            e = narr[i];
            tsm++;
        }
    }
    if(tsm>ansl) {
        ansl = tsm;
        anss = s;
        anse = e;
    }
    else if(tsm==ansl) {
        if(anse - anss < e - s)
            anss = s, anse = e;
    }

    if(anss==-1)
        cout<<-1<<endl;
    else
        cout<<anss<<" "<<anse<<endl;
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