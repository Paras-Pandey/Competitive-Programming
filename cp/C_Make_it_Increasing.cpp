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

int decr(vector<int> arr, int j) {
    if(j<0)
        return 0;
    if(j==0)
        return 1;
    int moves = 1;
    rgo(i, j, 1) {
        if(arr[i-1]<=arr[i]) {
            moves += (arr[i]+arr[i-1])/arr[i-1];
            arr[i-1] *= (arr[i]+arr[i-1])/arr[i-1];
        }
        else
            moves++;
    }

    return moves;
}

int forw(vector<int> arr, int j) {
    if(j>arr.size()-1)
        return 0;
    if(j==arr.size()-1)
        return 1;
    int moves = 1;
    go(i, j+1, arr.size()) {
        if(arr[i-1]>=arr[i]) {
            moves += (arr[i]+arr[i-1])/arr[i];
            arr[i] *= (arr[i]+arr[i-1])/arr[i];
        }
        else
            moves++;
    }

    return moves;
}

void solve() {
    int n;
    cin>>n;

    vi arr(n);
    for(auto &i: arr)
        cin>>i;

    int ans = decr(arr, -1) + forw(arr, 1);

    go(i, 1, n) {
        int tempmoves = 0;
        tempmoves += decr(arr, i-1) + forw(arr, i+1);

        amin(ans, tempmoves);
    }

    cout<<ans<<endl;
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