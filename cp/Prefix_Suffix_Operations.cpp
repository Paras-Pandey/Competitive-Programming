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

    vi arr(n), brr(n);

    go(i, 0, n) cin>>arr[i];
    go(i, 0, n) cin>>brr[i];

    vi dif(n);
    go(i, 0, n) {
        dif[i] = brr[i] - arr[i];
        if(dif[i]<0) {
            cout<<-1<<endl;
            return;
        }
    }

    int premax = dif[0], sufmax = 0, ans = 0, curpre = dif[0];

    go(i, 1, n-1) {
        dif[i] -= sufmax;
        if(dif[i]<0) {
            cout<<-1<<endl;
            return;
        }
        curpre = min(dif[i], curpre);
        dif[i]-= curpre;
        if(dif[i]>0) {
            if(dif[i+1]>=dif[i]) {
                sufmax += dif[i];
                dif[i] = 0;
            }
            else {
                cout<<-1<<endl;
                return;
            }
        }
    }
    dif[n-1] -= sufmax;
    if(dif[n-1]<0) {
        cout<<-1<<endl;
        return;
    }
    curpre = min(dif[n-1], curpre);
    dif[n-1] -= curpre;
    sufmax += dif[n-1];
    dif[n-1] = 0;

    cout<<premax+sufmax<<endl;
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