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

class mdata {
    public: 
        int val, ind;

        mdata(int _val, int _ind) {
            val = _val;
            ind = _ind;
        }
};

bool comp (mdata &a, mdata &b) {
    return a.val < b.val;
}

int lower(vector<mdata> &arr, int fval, int ind) {
    int l = 0, h = arr.size() - 1;
    while(h - l > 1) {
        int m = l + (h - l) / 2;
        if(arr[m].val > fval)
            h = m - 1;
        else
            l = m;
    }
    if(arr[h].val <= fval and arr[h].ind != ind)
        return arr[h].val;
    if(arr[l].val <= fval and arr[l].ind != ind)
        return arr[l].val;
    return (l == 0) ? -1 : arr[l - 1].val;
}

void solve(int i) {
    int n;
    cin>>n;

    vector<mdata> arr;
    for(int i = 0; i < n; i++) {
        int val, ind;
        cin>>val;
        ind = i;

        mdata cur = mdata(val, ind);
        arr.push_back(cur);
    }

    sort(arr.begin(), arr.end(), comp);
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int mentor = lower(arr, 2 * arr[i].val, arr[i].ind);
        ans[arr[i].ind] = mentor;
    }

    cout<<"Case #"<<i<<": ";
    for(auto i: ans)
        cout<<i<<" ";
    cout<<endl;
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