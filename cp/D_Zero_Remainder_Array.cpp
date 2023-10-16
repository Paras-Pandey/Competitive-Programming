#include "bits/stdc++.h"
using namespace std;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define whilecase while (tc--)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define cinstr cin >> str
#define getstr getline(cin, str)
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define in insert
typedef unsigned long long llu;
typedef long long lld;
typedef unsigned int U;
#define endl "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit(int n, int x) { return n | (1 << x); }
int ClearBit(int n, int x) { return n & ~(1 << x); }
int ToggleBit(int n, int x) { return n ^ (1 << x); }
bool CheckBit(int n, int x) { return (bool)(n & (1 << x)); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    whilecase
    {
        int n, k;
        cin >> n >> k;

        vector<lld> arr(n);

        for (auto &i : arr)
            cin >> i;

        map<lld, int> mp;

        int mx = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%k!=0)
            {
                mp[k-arr[i]%k]++;
                mx = max(mx, mp[k-arr[i]%k]);
            }
        }
        
        lld ans = 0;
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                ans = k*1ll*(mx-1) + i.first + 1;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}