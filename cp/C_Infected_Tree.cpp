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

int chl[300005][2];

int cnt(vector<int> &cp, int i) {
    if(chl[i][0]==-1 and chl[i][1]==-1)
        return 1;
    if(chl[i][0]!=-1)
        cp[i] += cnt(cp, chl[i][0]);
    if(chl[i][1]!=-1)
        cp[i] += cnt(cp, chl[i][1]);
    return cp[i] + 1;
}

void solve() {
    int n;
    cin>>n;
    memset(chl, -1, sizeof(chl));
    vi cp(n+1, 0);
    go(i, 0, n-2) {
        int a, b;
        cin>>a>>b;
        if(chl[a][0]==-1)
            chl[a][0] = b;
        else
            chl[a][1] = b;
    }

    cnt(cp, 1);
    int ds = 1, s = 1;
    while(1) {
        if(chl[s][0]==-1 and chl[s][1]==-1) 
            break;
        int fc = chl[s][0];
        int sc = chl[s][1];
        if(sc==-1) {
            ds++;
            break;
        }
        if(cp[fc]>cp[sc]) {
            ds+=2;
            s = sc;
        }
        else if(cp[fc]<cp[sc]) {
            ds+=2;
            s = fc;
        }
        else {
            int gfc = 0, gsc = 0;
            if(chl[fc][0]!=-1)
                gfc = max(gfc, cp[chl[fc][0]]);
            if(chl[fc][1]!=-1)
                gfc = max(gfc, cp[chl[fc][1]]);
            if(chl[sc][0]!=-1)
                gsc = max(gsc, cp[chl[sc][0]]);
            if(chl[sc][1]!=-1)
                gsc = max(gsc, cp[chl[sc][0]]);
            if(gfc>gsc) {
                ds+=2;
                s = fc;
            }
            else {
                ds+=2;
                s = sc;
            }
        }
    }

    cout<<n-ds<<endl;
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