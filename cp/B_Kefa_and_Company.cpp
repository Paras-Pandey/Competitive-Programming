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
    
    int n, d;
    cin>>n>>d;

    vector<pair<int, int>> fri;

    int x, y;
    FOR(i, n)
    {
        cin>>x>>y;
        fri.pb({x, y});
    }

    sort(fri.begin(), fri.end());
    vector<lld> m, f;

    m.pb(INT_MIN);
    f.pb(0);
    FOR(i, n)
    {
        m.pb(fri[i].first);
        f.pb(fri[i].second);
    }
    m.pb(INT_MAX);
        
    for(int i=2; i<=n; i++)  f[i] += f[i-1];

    lld ans = 0;
    int j = 1;
    for(int i=1; i<=n; i++)
    {
        if(m[i]>=m[j]+d)
        {
            while(m[j]+d<=m[i])
            {
                j++;
            }
        }
        if(ans < f[i] - f[j-1])
            ans = f[i] - f[j-1];    
    }

    cout<<ans<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// struct point{
//   long long m,f;
// } p[1000000];
// bool com(point l, point r)

// {
//     return l.m<r.m;
// }
// int main()
// {
//     long long x,nw,n,ans,i,j,df,d;
//     while(cin>>n>>d)
//     {
//         for(i=0;i<n;i++)
//         {
//             cin>>p[i].m>>p[i].f;
//         }
//          sort(p,p+n,com);
//          long long sum=0;
//          for(i=0;i<n;i++)
//          {
//              sum+=p[i].f;
//              p[i].f=sum;

//          }
//          j=-1;
//          ans=0,p[j].m=0;
//          for(i=0;i<n;i++)
//          {
//              if(p[i].m-p[j].m<d)
//                 df=p[i].m-p[j].m;
//               else
//              {
//                  df=p[i].m-p[j].m;
//                  while(df>=d)
//                  {
//                      j++;
//                      df=p[i].m-p[j].m;
//                  }
//              }
//              ans=max(ans,p[i].f-p[j-1].f);

//          }
//          cout<<ans<<endl;
//     }
//     return 0;
// }