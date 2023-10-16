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
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, p, cnt = 1, maxpt = INT_MIN;
    string s;
    pair<string, int> ans;
    cin>>n;

    unordered_map<string, vector<pair<int, int>>> pt;

    while(n--) {
        cin>>s>>p;
        if(pt.find(s) != pt.end()) {
            int currpt = (*pt[s].rbegin()).first;
            pt[s].pb(make_pair(currpt+p, cnt));
        }
        else {
            pt[s].pb(make_pair(p, cnt));
        }
        cnt++;
    }

    for(auto it: pt) {
        int lspt = (*it.second.rbegin()).first, lstm;
        for(auto jt: it.second) {
            if(jt.first>=lspt) {
                lstm = jt.second;
                break;
            }
        }
        if(lspt==maxpt) {
            if(lstm<ans.second) {
                ans = {it.first, lstm};
            }
        }
        else if(lspt>maxpt) {
            ans = {it.first, lstm};
            maxpt = lspt;
        }
    }

    cout<<ans.first<<endl;
    return 0;
}

#include"bits/stdc++.h"
using namespace std;

#define FOR(i, s, n)           for (int i=s; i<n; i++)
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define int                 long long
typedef unsigned long long  llu;
#define endl                "\n"
const int MOD = 1000000007;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

template<typename T, typename T1> T amax(T &a, T1 b) {if(b>a) a = b; return a};
template<typename T, typename T1> T amin(T &a, T1 b) {if(b<a) a = b; return a};
const long long INF = 1e18;

const int N = 0;

void solve() {
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