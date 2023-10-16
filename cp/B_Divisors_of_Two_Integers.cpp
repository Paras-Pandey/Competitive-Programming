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
    
    int n, x, y;
    cin>>n;

    vector<int> arr;
    FOR(i, n)
    {
        cin>>x;
        arr.pb(x);
    }

    sort(arr.begin(), arr.end());
    
    x = arr[n-1];
    
    vector<int> brr;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i-1] or x%arr[i])
            brr.pb(arr[i]);
    }
    sort(brr.begin(), brr.end());
    y = brr[brr.size()-1];
    
    cout<<x<<" "<<y;
    return 0;
}