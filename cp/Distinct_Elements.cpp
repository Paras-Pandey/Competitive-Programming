#include"bits/stdc++.h"
using namespace std;

#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define whilecase           while (tc--)
#define FOR(i, n)           for (int i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
typedef unsigned long long  llu;
typedef long long           lld;
typedef unsigned int        U;
#define endl                "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

const int e = 1e6+10;
const int mod = 1e9+7;
int freq[e];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n;
        cin>>n;
        memset(freq, 0, sizeof(freq));
        int arr[n];
        FOR(i, n)   cin>>arr[i];
        set<int> s;
        FOR(i, n)   s.insert(arr[i]);

        FOR(i, n)   freq[arr[i]]++;
        int sub = 1;
        for(auto i: s)   sub*=freq[i];

        llu ans = sub%mod;
        ans*=int(pow(2, s.size())-1)%mod;
        cout<<ans<<endl;
    }
    return 0;
}