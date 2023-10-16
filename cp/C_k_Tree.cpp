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

// int fact(int n)
// {
//     if(n==1 or n==0)    return 1;
//     return n*(fact(n-1)%MOD);
// }
// int per(string s)
// {
//     int arr[26] = {0};

//     for(int i=0; i<s.length(); i++)
//         arr[s[i]-'1']++;

//     int fa = 1;
//     for(int i = 0; i<s.length(); i++)
//         fa = fa*fact(arr[i]);

//     return fact(s.length())/fa;
// }

void solve()
{
    int n, k, d;
    cin>>n>>k>>d;

    int dp[n+1][2];

    dp[0][0] = 1;
    dp[0][1] = 0;

    for(int i=1; i<=n; i++)
    {
        dp[i][1] = 0, dp[i][0] = 0;
        for(int j=1; j<=min(d-1, i); j++)
        {
            dp[i][0] = (dp[i][0] + dp[i-j][0])%MOD;
            dp[i][1] = (dp[i][1] + dp[i-j][1])%MOD;
        }
        for(int j=d; j<=min(k, i); j++)
        {
            dp[i][1] = (dp[i][1] + dp[i-j][0] + dp[i-j][1])%MOD;
        }
    }

    cout<<dp[n][1]; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}

//recursive runtime error

// #include"bits/stdc++.h"
// using namespace std;

// #define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// #define whilecase           while (tc--)
// #define FOR(i, n)           for (int i=0; i<n; i++)
// #define cinstr              cin >> str
// #define getstr              getline (cin,str)
// #define vi                  vector <int>
// #define vs                  vector <string>
// #define pii                 pair <int,int>
// #define mii                 map <int,int>
// #define pb                  push_back
// #define in                  insert
// typedef unsigned long long  llu;
// typedef long long           lld;
// typedef unsigned int        U;
// #define endl                "\n"
// const int MOD = 1000000007;
// const int MAX = 1000005;
// int SetBit (int n, int x) { return n | (1 << x); }
// int ClearBit (int n, int x) { return n & ~(1 << x); }
// int ToggleBit (int n, int x) { return n ^ (1 << x); }
// bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

// void sol(int n, int k, int d, int & ans, bool che, int l)
// {
//     if(n==0 and che==1)
//     {
//         ans++;
//         return;
//     }
//     else if(n<=0 or l==0)
//         return;
//     for(int i=1; i<=k; i++)
//     {
//         if(i>=d)
//             sol(n-i, k, d, ans, 1, l-1);
//         else 
//             sol(n-i, k, d, ans, che, l-1);
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n, k, d;
//     cin>>n>>k>>d;

//     int ans = 0, l = n-d;
//     sol(n, k, d, ans, 0, l+1);
//     cout<<ans%MOD<<endl;
//     return 0;
// }