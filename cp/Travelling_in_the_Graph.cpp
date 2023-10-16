#include"bits/stdc++.h"
using namespace std;

#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define whilecase           while (tc--)
#define FOR(i, n)           for (int i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
typedef unsigned long long  llu;
typedef long long           lld;
typedef unsigned int        U;
#define endl                "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

void dfs(int ver, int & mx, unordered_map<int, vector<int>> & mp, map<int, bool> & chk) {
    chk[ver] = true;
    if(mp[ver].size()==0)
        return;
    for(auto i: mp[ver]) {
        mx = max(i, mx);
        if(!chk[i])
            dfs(i, mx, mp, chk);
    }
}

void rdfs(int ver, int & mn, unordered_map<int, vector<int>> & mp, map<int, bool> & chk) {
    chk[ver] = true;
    if(mp[ver].size()==0)
        return;
    for(auto i: mp[ver]) {
        mn = min(i, mn);
        if(!chk[i])
            rdfs(i, mn, mp, chk);
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase {
        int n, m;
        cin>>n>>m;

        unordered_map<int, vector<int>> mp;
        FOR(i, m) {
            int x, y;
            cin>>x>>y;

            mp[x].pb(y);
            mp[y].pb(x);
        }

        if(m==0) {
            cout<<n-1<<endl;
            continue;
        }

        int lrf = INT_MIN, lrl = INT_MAX;

        map<int, bool> chk; 
        dfs(1, lrf, mp, chk);
        chk.clear();
        rdfs(n, lrl, mp, chk);

        int minr = chk.begin()->first, mxr = chk.rbegin()->first;
        if(lrf==INT_MIN)
            lrf = 1;
        if(lrl==INT_MAX)
            lrl = n;
        
        if(lrf==n) {
            cout<<0<<endl;
        }
        else {
            cout<<min(lrl-lrf, minr-lrf+lrl-mxr)<<endl;
        }
    }
    return 0;
}