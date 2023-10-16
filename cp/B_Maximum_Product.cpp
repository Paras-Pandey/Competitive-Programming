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

bool comp(int a, int b)
{
    return abs(a)>abs(b);
}

void sol()
{
    int n;
    cin>>n;

    lld *arr = new lld[n];

    FOR(i, n)   cin>>arr[i];
    
    sort(arr, arr+n, comp);

    int neg = 0;
    FOR(i, n)   if(arr[i]<0)    neg++; 

    lld ans = 1;
    if(neg==n)
    {
        for(int i=n-1; i>=n-5; i--)
            ans *= arr[i];
        
        cout<<ans<<endl;
    }  

    else
    {
        ans = arr[0]*arr[1]*arr[2]*arr[3]*arr[4];

        for(int i=5; i<n; i++)
        {
            for(int j=0; j<=4; j++)
            {
                lld tmp = arr[i];
                for(int k = 0; k<=4; k++)
                {
                    if(k!=j)
                        tmp*=arr[k];
                }
                if(ans<tmp)
                ans = tmp;
            }
        }

        cout<<ans<<endl;
     
    }
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