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

void solve()
{
    int x, n;
    cin>>n;

    vector<int> arr;
    vector<pair<int, int>> sol;
    FOR(i, n){
        cin>>x;
        arr.pb(x);
        sol.pb({x, i+1});
    }

    sort(sol.begin(), sol.end());

    int ans = 0;
    llu a, b;
    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            b = 1ll*sol[j].first * sol[i].first;
            a = sol[i].second + sol[j].second;
            if(a==b)
            {
                ans++;
            }
            else if(b>2*n-1)
                break;
        }
    }

    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        solve();
    }
    return 0;
}