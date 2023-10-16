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
    for(auto &i: arr)
        cin>>i;

    unordered_map<int, int> cnt;
    vi newv;

    for(auto i: arr) {
        if(cnt.count(i))
            cnt[i]++;
        else {
            cnt[i]++;
            newv.pb(i);
        }
    }

    sort(all(newv));

    int ans = 0;

    for(int i=0; i<newv.size(); i++) {
        int ele = newv[i];
        int j = 0, k = newv.size()-1;

        if(ele*ele==ele) {
            ans += cnt[ele]*(cnt[ele]-1)*(cnt[ele]-2);
            continue;
        }
        while(j<k) {
            if(j!=i and newv[j]*newv[j]==ele) {
                ans += 2*cnt[ele]*cnt[newv[j]]*(cnt[newv[j]]-1);
                j++;
            }
            else if(k!=i and newv[k]*newv[k]==ele) {
                ans += 2*cnt[ele]*cnt[newv[k]]*(cnt[newv[k]]-1);
                k--;
            }
            else if(newv[j]*newv[k]==ele) {
                if(i==j)
                    ans += 2*cnt[ele]*(cnt[ele]-1)*cnt[newv[k]];
                else if(i==k)
                    ans += 2*cnt[ele]*(cnt[ele]-1)*cnt[newv[j]];
                else
                    ans += 2*cnt[ele]*cnt[newv[j]]*cnt[newv[k]];
                j++, k--;
            }
            else if(newv[j]*newv[k]>ele)
                k--;
            else 
                j++;
        }
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