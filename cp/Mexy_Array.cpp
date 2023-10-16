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
    int n, maxno = INT_MIN;
    cin>>n;

    vi arr(n);
    set<int> topro;
    bool noneed = false;
    go(i, 0, n) {
        cin>>arr[i];
        maxno = max(maxno, arr[i]);
        if(arr[i]!=-1) {
            if((topro.size()>0 and *topro.crbegin()>arr[i]) or arr[i]>i+1) {
                cout<<-1<<endl;
                noneed = true;
            }
            else 
                topro.insert(arr[i]);
        }
    }

    if(noneed) {
        return;
    }

    int curele = 0;
    vi ans(n);
    go(i, 0, n) {
        if(arr[i]!=-1) {
            while(topro.find(curele)!=topro.end()) 
                curele++;
            ans[i] = curele++;
            if(i<n-1 and ans[i+1]==-1)
                ans[i+1] = arr[i++];
        }
        else {
            while(topro.find(curele)!=topro.end()) 
                curele++;
            ans[i] = curele++;
        }
    }

    for(auto i: ans)
        cout<<i<<" ";
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