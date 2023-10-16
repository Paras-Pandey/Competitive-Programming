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

void solve(int i) {
    long long d, n, x;
    cin>>d>>n>>x;

    auto comp = [](vector<long long> &a, vector<long long>&b) {
        return (a[2] / (a[1] * 1.0)) < (b[2] / (b[1] * 1.0));
    };

    vector<vector<int>> pq;
    for(int i = 0; i < n; i++) {
        long long m, d, p;
        cin>>m>>d>>p;
        pq.push_back({m, d, p});
    }

    long long ans = 0;
    int cd = 1;

    while(pq.size() and cd < d) {
        vector<vector<int>> temp;
        int tplanted = 0;
        
        while(!pq.empty() and tplanted < x) {
            auto t = pq.top();
            pq.pop();
            if(t[1] > cd) {
                temp.push_back(t);
                continue;
            }
            long long canbeplant = min(t[0], (cd - t[1] + 1) * (x - tplanted));
            t[0] -= canbeplant;
            tplanted += canbeplant;
            ans += 1ll * t[2] * canbeplant;
            if(t[0] != 0) {
                temp.push(t);
            }
        }

        for(auto i: temp)
            pq.push(i);
        cd++;
    }

    cout<<"Case #"<<i<<": "<<ans<<endl;
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