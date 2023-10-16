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

lld dp[MAX];
lld pre[MAX];

void solve(int k)
{
    for(int i=0; i<k; i++)
        dp[i] = 1;
    
    for(int i=k; i<=100000; i++)
        dp[i] = (dp[i-1] + dp[i-k])%MOD;
    
    return;
}

void init(int k)
{
    solve(k);
    for(int i=0; i<=100000; i++)
        pre[i] = (pre[i-1] + dp[i])%MOD;

}

void sol()
{
    int a, b;
    cin>>a>>b;

    cout<<(pre[b] - pre[a-1] + MOD)%MOD<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc, k;
    cin>>tc>>k;

    init(k);

    whilecase
    {
        sol();
    }
    return 0;
}