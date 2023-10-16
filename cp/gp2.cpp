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

int findBestCity(int distanceThreshold, int city_nodes, vector<int> city_from, vector<int> city_to, vector<int> city_weight) {
    int ms = INT_MAX, ans = -1;

    vector<int> adj[city_nodes + 1];

    for(int i = 0; i < city_from.size(); i++) {
        adj[city_from[i]].push_back(city_weight[i]);
        adj[city_to[i]].push_back(city_weight[i]);
    }

    for(int i = 1; i <= city_nodes; i++) {
        sort(adj[i].begin(), adj[i].end());
        int ccnt = upper_bound(adj[i].begin(), adj[i].end(), distanceThreshold) - adj[i].begin();
 
        if(ccnt <= ms) {
            ms = ccnt;
            ans = i;
        }
    }

    return ans;
}

 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        // vector<int> cf = {1, 1, 1, 2, 2, 3};
        // vector<int> ct = {2, 3, 4, 3, 4, 4};
        // vector<int> w = {1, 1, 2, 1, 1, 1};
        // cout<<findBestCity(1, 4, cf, ct, w);
        auto ans = batonPass(4, 5);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}