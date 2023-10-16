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

void solve(int n, int* arr)
{
    vector<int> maxr(n), minr(n);
    
    maxr[0] = n+1;
    for(int i=1; i<n; i++)
    {
        maxr[i] = min(maxr[i-1], arr[i-1]);
    }
    maxr[0] = arr[0];

    minr[n-1] = 0;
    for(int i=n-2; i>=0; i--)
    {
        minr[i] = max(minr[i+1], arr[i+1]);
    }
    minr[n-1] = arr[n-1];

    for(int i=0; i<n; i++)
    {
        if(maxr[i]>minr[i])
        {
            cout<<"NO"<<endl;
            return;
        }    
    }
    cout<<"YES"<<endl;
    return;
}

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

        int *arr =  new int[n];
        FOR(i, n)   cin>>arr[i];

        solve(n, arr);
    }
    return 0;
}