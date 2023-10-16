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

const int N = 100005;
int Primes[N];

void SieveOfEratosthenes()
{
    Primes[1] = 1;
    for(int i=2; i<N; i++)
        Primes[i] = i;
    for(int i = 4; i<N; i+=2) {
        Primes[i] = 2;
    }

    for (int i = 3; i*i < N; i += 2) {
        if (Primes[i] == i) {
            for (int j = 3 * i; j < N; j += 2 * i)
                Primes[j] = i;
        }
    }

}

void sol(int n, unordered_map<int, int> &mp) {
    while(n != 1) {
        mp[Primes[n]]++;
        n /= Primes[n]; 
    }
}

void solve() {
    int n, q;
    cin>>n>>q;

    unordered_map<int, int> mp, np;
    go(j, 0, q-1) {
        int a, b;
        cin>>a>>b;

        mp.clear();
        np.clear();

        sol(a, mp);
        sol(b, np);

        int ans = 0;

        set<int> sub;
        for(auto i: mp) {
            if(np.find(i.first) != np.end()) {
                ans += i.first * ((np[i.first] + mp[i.first]) - 2*min(np[i.first], mp[i.first]));
                sub.insert(i.first);
            }
            else 
                ans += i.first * i.second;
        }

        for(auto i: np) {
            if(sub.find(i.first) == sub.end()) {
                ans += i.first * i.second;
            }
        }

        cout<<ans<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    SieveOfEratosthenes();
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}