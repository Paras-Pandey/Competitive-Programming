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
    int n, k;
    cin>>n>>k;

    lld *arr = new lld[n];
    FOR(i, n)   cin>>arr[i];

    vector<lld> vec(arr, arr+n);
    sort(vec.begin(), vec.end());
    int subarr = n;
    for(int i=1; i<n; i++)
    {
        int freq = 0;
        while(arr[i]==*upper_bound(vec.begin(), vec.end(), arr[i-1]))
        {
            freq++;
            i++;
        }
        subarr-=freq;
    }   

    if(subarr<=k)   cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;
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