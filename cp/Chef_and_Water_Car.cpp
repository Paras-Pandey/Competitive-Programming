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
        llu n, v;
        cin>>n>>v;

        llu max = n*(n-1)/2;
        llu min=0;
        if(v==1)
            cout<<max<<" "<<max<<endl;
        else if(n==1)
            cout<<0<<" "<<0<<endl;
        else if(v>=n-1)
            cout<<max<<" "<<v<<endl;
        else
        {
            llu k = 1;
            while(k<n)
            {
                min+=k*v;
                k+=v;
            }
            if(k==n)
                cout<<max<<" "<<min<<endl;
            else 
            {
                k-=v;
                min-=k*v;
                min+=(n-k)*(k-(n-k));
                cout<<max<<" "<<min<<endl;
            }
        }
    }
    return 0;
}