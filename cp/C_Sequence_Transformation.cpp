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
    int n;
    cin>>n;

    int *arr = new int[n];
    FOR(i, n)   cin>>arr[i];

    unordered_map<int, int>  mp;

    if(arr[0]!=arr[1])  mp[arr[0]]++;
    for(int i = 1; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1] and mp[arr[i]]==0)
            mp[arr[i]]+=2;
        else if(arr[i]!=arr[i+1] and mp[arr[i]]>0)
            mp[arr[i]]++;
    }
    
    if(mp[arr[n-1]]==0 and arr[n-1]!=arr[n-2])
        mp[arr[n-1]]++;

    int minseg = INT_MAX;

    for(auto i: mp)
    {
        int temp = i.second;
        if(temp == n)
            temp = 0;
        minseg = min(temp, minseg);
    }

    cout<<minseg<<endl;
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