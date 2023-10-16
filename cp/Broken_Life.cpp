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

bool chk(string a, string b) {
    if(a.length()<b.length())
        return true;
    int j = 0, n = a.length();
    for(int i=0; i<n; i++) {
        if(a[i]==b[j]) {
            j++;
            if(j==b.length()) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin>>n>>m;

    string a, b;
    cin>>a>>b;

    if(!chk(a, b)) {
        cout<<-1<<endl;
        return;
    }

    char pos[] = {'a', 'b', 'c', 'd', 'e'};
    int j = 0;
    for(int i=0; i<n; i++) {
        if(a[i]=='?') {
            for(auto k: pos) {
                if(k!=b[j])
                    a[i] = k;
            }
        }
        else if(a[i]==b[j])
            j++;
    }

    if(!chk(a, b))
        cout<<-1<<endl;
    cout<<a<<endl;
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