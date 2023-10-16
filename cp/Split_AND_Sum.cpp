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


bool sol(int i, vector<int> &arr, int chk, vector<int> &cur) {
    if(i==arr.size())
        return true;
    int curs = 0;
    for(int j=i; j<arr.size(); j++) {
        curs += arr[j];
        if(curs&chk) {
            cur.push_back(j+2);
            if(sol(j+1, arr, chk, cur))
                return true;
            cur.pop_back();
        }
    }
    return false;
}

void solve() {
    int n;
    cin>>n;

    vi arr(n);
    go(i, 0, n-1)
        cin>>arr[i];
    
    vector<int> cur;
    for(int i=0; i<=30; i++) {
        cur.push_back(1);
        int chk = 1<<i;
        if(sol(0, arr, chk, cur) and cur.size()>2) {
            cout<<"YES"<<endl<<cur.size()-1<<endl;
            for(int i=0; i<cur.size()-1; i++)
                cout<<cur[i]<<" "<<cur[i+1]-1<<endl;
            return;
        }
        cur.clear();
    }

    cout<<"NO"<<endl;
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