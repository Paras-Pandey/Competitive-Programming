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

const int N = 200005;
int vis[N];

void cntpath(int root, unordered_map<int, vector<int>> &child, vector<int> &curpath) {
    curpath.pb(root);
    vis[root] = 1;
    if(child.find(root)!=child.end()) {
        for(auto i: child[root]) {
            if(vis[i]==-1) {
                cntpath(i, child, curpath);
                return;
            }
        }
    }
}

void solve() {
    int n;
    cin>>n;

    memset(vis, -1, sizeof(vis));

    int root;
    vi arr(n+1);
    go(i, 1, n+1) {
        cin>>arr[i];
        if(arr[i]==i)
            root = i;
    }

    unordered_map<int, vector<int>> child;
    go(i, 1, n+1) {
        if(i==arr[i])
            continue;
        child[arr[i]].pb(i);
    }

    queue<int> proc;
    vector<vector<int>> paths;
    proc.push(root);

    while(!proc.empty()) {
        int curroot = proc.front();
        proc.pop();

        if(vis[curroot]==-1) {
            vector<int> pth;
            cntpath(curroot, child, pth);
            paths.pb(pth);
        }

        for(auto i: child[curroot]) {
            proc.push(i);
        }
    }

    cout<<paths.size()<<endl;
    for(auto i: paths) {
        cout<<i.size()<<endl;
        for(auto j: i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
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