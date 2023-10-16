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

vector<string> split(string s, char del) {
    int st = 0, e = s.length()-1;
    vector<string> giv;
    while(st<=e) {
        string temp = "";
        while(st<=e and s[st]!=del) {
            temp += s[st++];
        }
        giv.pb(temp);
        st++;
    }

    return giv;
}

int to_int(string s) {
    int ans = 0;
    for(auto i: s) {
        ans = ans*10 + (i-'0');
    }

    return ans;
}

class Graph {
    public:
        unordered_map<int, bool> vis;
        unordered_map<int, vector<int>> adj;

        void add_edge(int s, int n) {
            adj[s].pb(n);
        }

        long long dfs(int s, int e);
};

long long Graph:: dfs(int s, int e) {
    vis[s] = true;
    long long ans = INT_MAX;
    for(auto i: adj[s]) {
        if(i==e) 
            return 1; 
        if(!vis[i]) {
            ans = min(1ll*dfs(i, e)+1, ans);
        }
    }
    return ans;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    string s;
    getline(cin, s);
    
    int n = to_int(s);

    Graph g;
    FOR(i, n) {
        string s1;
        getline(cin, s1);

        vector<string> giv = split(s1, ' ');
        for(auto v: giv) {
            g.add_edge(i+1, to_int(v));
        }
    }

    getline(cin, s);

    vector<string> ques = split(s, ' ');
    int start = to_int(ques[0]), end = to_int(ques[1]);

    long long ans = g.dfs(start, end);
    ans = (ans>=INT_MAX)?-1:ans;
    cout<<ans<<endl;

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
const int MAX = 1000005;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

solve() {
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    \cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}