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

int leng(int* a, int n)
{
    vector<int> mp;
    for(int i = 0; i < n; i++)
    {
        vector<int> :: iterator p;
        p = upper_bound(mp.begin(), mp.end(), a[i]);
        if(p != mp.end())
        {
            *p = min(*p, a[i]);
        }
        else
        {
            mp.push_back(a[i]);
        }
    }
    return mp.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n, m;
        cin>>n>>m;

        int *arr = new int[n], *brr = new int[m];
        FOR(i, n)   cin>>arr[i];
        FOR(i, m)   cin>>brr[i];

        int a = leng(arr, n);
        int b = leng(brr, m);

        cout<<a+b<<endl;
    }
    return 0;
}