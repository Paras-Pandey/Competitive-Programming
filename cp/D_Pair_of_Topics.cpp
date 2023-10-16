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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int *arr = new int[n];
    int *brr = new int[n];

    int *dif = new int[n];
    FOR(i, n)   cin>>arr[i];
    FOR(i, n)   cin>>brr[i];

    FOR(i, n)   dif[i] = arr[i] - brr[i];

    sort(dif, dif+n);
    llu pair = 0;
    FOR(i, n-1)
    {
        int *upper = upper_bound(dif+i+1, dif+n, (-1)*dif[i]);
        pair += (dif+n)-upper;
    }

    cout<<pair;
    return 0;
}