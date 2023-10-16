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

    bool nopos = 1;
    int x = 0;
    vi arr(n);
    for(auto &i: arr) {
        cin>>i;
        if(i!=0)
            nopos = 0;
    }

    if(nopos) {
        cout<<-1<<endl;
        return;
    }

    sort(all(arr));

    for(auto i: arr) {
        if(x==i) {
            x++;
        }
    }

    int j = 0, ans = 0;
    while(arr[j]<x)
        j++;
    if(x==0) {
        ans += arr[j] - x - 1;
        cout<<ans<<endl;
        return;
    }
    
    for(;j<n;j++){
        int t1=arr[j];
        int count1=0;
        while(arr[j]==t1 && j<n){
            while(arr[j]==t1 && j<n){
                j++;
            } 
            t1++;
            count1++;
        }
        if(count1>=x-1){
            ans++;
        }
        j--;
    }

    cout<<ans<<endl;
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