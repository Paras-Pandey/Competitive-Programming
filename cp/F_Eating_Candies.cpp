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

int bs(vector<int> &arr, int tar) {
    int i = 0, j = arr.size()-1;
    while(i<=j) {
        int mid = i + (j-i)/2;
        if(arr[mid]==tar)
            return mid;
        else if(arr[mid]>tar)
            j = mid-1;
        else
            i = mid+1;
    }
    return -1;
}
void solve() {
    int n;
    cin>>n;

    vi arr(n);
    for(auto &i: arr)
        cin>>i;

    vi presum, suffsum;
    int sum = 0;
    go(i, 0, n) {
        presum.pb(sum+arr[i]);
        sum += arr[i];
    }
    sum = 0;
    rgo(i, n-1, 0) {
        suffsum.pb(sum+arr[i]);
        sum += arr[i];
    }

    int i = n-1;
    while(presum[i]>sum/2)
        i--;

    int ans = 0;
    for(int j=i; j>=0; j--) {
        int ind = bs(suffsum, presum[j]);
        if(ind!=-1) {
            ans = max(ans, j+ind+2);
        }
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