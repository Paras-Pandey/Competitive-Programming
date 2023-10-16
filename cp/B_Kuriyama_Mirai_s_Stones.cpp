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

    int arr[n+1];
    arr[0] = 0;
    for(int i=1; i<=n; i++)  cin>>arr[i];

    int arr2[n];
    FOR(i, n+1)   arr2[i] = arr[i];
    sort(arr+1, arr+n+1);
    
    for(int i=1; i<=n; i++)
    {
        arr[i] += arr[i-1];
        arr2[i] += arr2[i-1];
    }
    int q; 
    cin>>q;

    while(q--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int sum = 0;
        if(a==1)
        {
            sum = arr2[c] - arr2[b-1];
        }
        else
        {
            sum = arr[c] - arr[b-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}