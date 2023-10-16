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
    int n;
    cin>>n;

    lld *arr = new lld[n];
    FOR(i, n)   cin>>arr[i];


    int maxsec = 1;
    bool s = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            s = 0;
            int dif = arr[i-1] - arr[i];
            int power = 0, val = 0;
            while(dif>val)
            {
                val += pow(2, power);
                power++;
            }  
            if(power<=maxsec)
            {
                arr[i] = arr[i-1];
            }
            else 
            {
                maxsec = power;
                arr[i] = arr[i-1];
            }     
        }
    }
    if(s)   cout<<0<<endl;
    else    cout<<maxsec<<endl;
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