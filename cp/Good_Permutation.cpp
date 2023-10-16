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

bool chk(vector<int> arr) {
    int x = 0;
    for(int i=1; i<6; i++) {
        x ^= abs(arr[i-1]-i);
        if(arr[i-1]==i)
            return 0;
    }
    if(x)
        return 0;
    return 1;
}
void solve() {
    int n;
    cin>>n;

    if(n%2 and n<5)
        cout<<-1<<endl;
    else {
        if(n%2) {
            vector<int> arr{1, 2, 3, 4, 5};
            while(next_permutation(all(arr))) {
                if(chk(arr))
                    break;
            }
            for(auto i: arr)
                cout<<i<<" ";
            for(int i=6; i<=n; i+=2)
                cout<<i+1<<" "<<i<<" ";
        }
        else {
            for(int i=1; i<=n; i+=2)
                cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
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