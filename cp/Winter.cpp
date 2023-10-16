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

void freeze(vector<vi> & adjlist, vector<int> & frozen, vector<bool> &isfrozen) {
    vi newfrozen;
    for(auto &i: frozen) {
        for(auto &j:adjlist[i]) {
            if(!isfrozen[j]) {
                isfrozen[j] = 1;
                newfrozen.pb(j);
            }
        }
    }
    frozen = newfrozen;
}

bool ifdone(vector<bool> &isfrozen, vector<int> &connected) {
    for(auto i: connected) {
        if(!isfrozen[i])
            return false;
    }
    return true;
}

void solve() {
    int n, m, q;
    cin>>n>>m>>q;

    vector<vi> adjlist(n+1);
    vector<bool> isfrozen(n+1);
    vector<int> isconnected;
    vector<int> frozen;
    go(i, 0, m) {
        int e1, e2;
        cin>>e1>>e2;

        isconnected.pb(e1);
        isconnected.pb(e2);
        adjlist[e1].pb(e2);
        adjlist[e2].pb(e1);
    }


    bool doneanddusted = false;
    go(i, 0, q) {
        int qt, node;
        cin>>qt>>node;
        if(qt==1) {
            if(!isfrozen[node]) {
                frozen.pb(node);
                isfrozen[node] = 1;
            }
        }
        else if(qt==2) {
            while(!doneanddusted and (node--)) {
                freeze(adjlist, frozen, isfrozen);
                if(ifdone(isfrozen, isconnected)) {
                    doneanddusted = true;
                    break;
                }
            }
        }
        else {
            if(isfrozen[node])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    

    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}