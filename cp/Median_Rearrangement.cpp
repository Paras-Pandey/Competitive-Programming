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
    
    int tc;
    cin>>tc;

    whilecase
    {
        llu n, k;
        cin>>n>>k;

        int arr[n*n];
        FOR(i, n*n)
        {
            cin>>arr[i];
        }
        sort(arr, arr+(n*n));
        int cost = 0, i=0, min;
        if(n%2==0)
        {
            while(n*n-1-i>n*n/2)
            {
                cost+=arr[n*n-1-i];
                i+=n/2;
                min = arr[n*n-1-i];
            }
        }
        if(cost>=k)
            cout<<-1<<endl;
        else
            cout<<min<<endl;
    }
    return 0;
}