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
    int n, moves = 0;
    cin>>n;

    if(n%2)
        cout<<1<<endl;
    else {
        int pcnt = 0;
        while(n%2==0) {
            n/=2;
            pcnt++;
        }
        if(n>1 and pcnt%2) {
            for(int i=3; i*i<n; i+=2) {
                int cnt = 0;
                while(n%i==0) 
                    n/=i, cnt++;
                if(cnt%2==0) {
                    if(n==1)
                        cout<<2<<endl;
                    else
                        cout<<3<<endl;
                    return;
                }
            }
            cout<<-1<<endl;
        }
        else {
            if(n>1)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
    }
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