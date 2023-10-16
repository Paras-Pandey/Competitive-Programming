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

bool ispali(string s) {
    string rev = s;
    reverse(all(rev));

    return s == rev;
}

string minChar(string str, bool chk) {
    if(ispali(str) and !chk)
        return "";
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(chk)
        rev[0] = '#';
    int n = str.length();
    
    str = str + "#" + rev;
    vector<int> lps(2 * n + 1, 0);
    int i = 1, plps = 0;
    
    while(i <= 2 * n) {
        if(str[i] == str[plps])
            lps[i++] = ++plps;
        else if(plps == 0)
            lps[i++] = 0;
        else
            plps = lps[plps - 1];
    }
    string res = str.substr(lps.back(), n - lps.back());

    return minChar(res, 0) + res;
}

void solve(int i) {
    int n;
    cin>>n;

    string s;
    cin>>s;

    reverse(s.begin(), s.end());

    cout<<"Case #"<<i<<": "<<minChar(s, 1)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    cin>>t;
    int i = 1;
    while(t--) {
        solve(i++);
    }
    return 0;
}