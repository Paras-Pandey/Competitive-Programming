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
    int n;
    cin>>n;

    vector<pair<float, float>> arr;
    int x, y;
    go(i, 0, n) {
        cin>>x>>y;
        arr.pb({x, y});
    } 

    int cnt = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            float cntx = (arr[i].first+arr[j].first)/2, cnty = (arr[i].second+arr[j].second)/2;
            float r = (arr[i].first-cntx)*(arr[i].first-cntx) + (arr[i].second-cnty)*(arr[i].second-cnty);
            for(int k=0; k<n; k++) {
                if(k==i || k==j)
                    continue;
                if(((arr[k].first-cntx)*(arr[k].first-cntx) + (arr[k].second-cnty)*(arr[k].second-cnty))==r)
                    cnt++;
            }
        }
    }

    cout<<cnt<<endl;
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