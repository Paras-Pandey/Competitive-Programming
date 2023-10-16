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

    vi arr(n);
    vi odd, even;
    for(auto &i: arr) {
        cin>>i;
        if(i%2)
            odd.pb(i);
        else
            even.pb(i);
    }

    sort(all(even), greater<int>());
    sort(all(odd), greater<int>());
    //case 1- alice chooses even and bob chooses even
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0, a4 = 0, b4 = 0, i = 0, j = 0;
    bool gngon = 1;
    
    while(gngon) {
        if(i<even.size())
            a1 += even[i++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            b1 += even[i++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            a1 += odd[j++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            b1 += odd[j++];
        else
            gngon = 0;
    }

    //case 2- alice chooses even and bob chooses odd
    gngon = 1;
    i = 0, j = 0;
    while(gngon) {
        if(i<even.size())
            a2 += even[i++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            b2 += odd[j++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            a2 += odd[j++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            b2 += even[i++];
        else
            gngon = 0;
    }

    //case 3- alice chooses odd and bob chooses even
    gngon = 1;
    i = 0, j = 0;
    while(gngon) {
        if(j<odd.size())
            a4 += odd[j++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            b4 += even[i++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            a4 += even[i++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            b4 += odd[j++];
        else
            gngon = 0;
    }

    //case 4- alice chooses odd and bob chooses odd
    gngon = 1;
    i = 0, j = 0;
    while(gngon) {
        if(j<odd.size())
            a4 += odd[j++];
        else
            gngon = 0;
        if(gngon and j<odd.size())
            b4 += odd[j++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            a4 += even[i++];
        else
            gngon = 0;
        if(gngon and i<even.size())
            b4 += even[i++];
        else
            gngon = 0;
    }

    if(min(a1, a2) > min(a3, a4)) {
        if(b1>b2) {
            cout<<a1<<endl;
            return;
        }
        else if(b2>b1) {
            cout<<a2<<endl;
            return;
        }
        else {
            cout<<max(a1, a2)<<endl;
            return;
        }
    }
    else {
        if(b3>b4) {
            cout<<a3<<endl;
            return;
        }
        else if(b4>b3) {
            cout<<a4<<endl;
            return;
        }
        else {
            cout<<max(a3, a4)<<endl;
            return;
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