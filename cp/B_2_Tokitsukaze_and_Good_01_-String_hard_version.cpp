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

int cnt_chn(string s) {
    int res = 0;
    go(i, 0, s.length()-1) {
        if(s[i]!=s[i+1])
            res++;
    }

    return res+1;
}

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt = 0, tmpcnt;
    for(int i=0; i<n; i++) {
        tmpcnt = 1;
        while(i<n-1 and s[i]==s[i+1]) {
            i++;
            tmpcnt++;
        }
        if(tmpcnt%2) {
            cnt++;
            i++;
        }
    }
    if(cnt==0) {
        int chn = cnt_chn(s);
        cout<<cnt<<" "<<chn<<endl;
        return;
    }

    int seg = 0, pre = -1;
    for(int i=0; i<n; i+=2) {
        if(s[i]^s[i+1])
            continue;
        if(s[i]==pre)
            continue;
        seg++;
        pre = s[i];
    }
    seg = max(seg, 1ll);
    cout<<cnt<<" "<<seg<<endl;
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