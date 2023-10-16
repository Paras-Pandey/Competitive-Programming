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
    int a, b;
    cin>>a>>b;

    vi arr(a+1);
    go(i, 0, a)
        arr[i+1] = i+1;
    vi pres(a+1);
    go(i, 0, a)
        pres[i+1] = i+1;
    vi op(b+1);
    go(i, 0, b)
        cin>>op[i];

    for(int i=0; i<b; i++) {
        if(arr[op[i]]==a) {
            int ele1 = op[i], ele2 = pres[a-1];
            arr[ele1] = a-1;
            arr[ele2] = a;
            pres[a-1] = ele1;
            pres[a] = ele2;
        }
        else {
            int ind  = arr[op[i]];
            int ele1 = op[i], ele2 = pres[ind+1];
            arr[ele1] = ind+1;
            arr[ele2] = ind;
            pres[ind] = ele2;
            pres[ind+1] = ele1;
        }
    }

    go(i, 1, a+1) {
        cout<<pres[i]<<" ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}