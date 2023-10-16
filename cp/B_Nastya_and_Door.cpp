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

void sol()
{
    int n, k;
    cin>>n>>k;

    vector<int> arr(n), brr(n, 0);
    FOR(i, n)   cin>>arr[i];

    for(int i=1; i<n-1; i++)    
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
            brr[i] += 1;
        brr[i] += brr[i-1];
    }

    unordered_map<int, int> mp;
    int maxdif = INT_MIN;
    for(int i=k-1; i<n; i++)
    {
        int p = brr[i-1] - brr[i-k+1];
        if(mp[p]==0)
            mp[p] = i-k+2;
        maxdif = max(maxdif, p);
    }

    cout<<maxdif+1<<" "<<mp[maxdif]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        sol();
    }
    return 0;
}