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

int sol(int arr[], int n)
{
    int dp[n+1][2];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i<=n; i++)
    {   
        if(arr[i]==0)
        {
            dp[i][0] = dp[i-1][0] + 1;
            dp[i][1] = 0;
        }
        else if(arr[i]==3)
        {  
            if(dp[i-1][1] == 0)
                dp[i][1] = arr[i] - arr[i+1];
            else
                dp[i][1] = arr[i]-dp[i-1][1]; 
            dp[i][0] = dp[i-1][0];
        }
        else 
        {
            dp[i][0] = dp[i-1][0] + (arr[i]==dp[i-1][1]);
            if(arr[i]==dp[i-1][1])
                dp[i][1] = 0;
            else
                dp[i][1] = arr[i];
        }
    }
    return dp[n][0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int arr[n+1];
    arr[0] = 0;
    for(int i=1; i<=n; i++)   cin>>arr[i];

    cout<<sol(arr, n);
    return 0;
}