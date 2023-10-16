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
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int x, y, x1, y1, x2, y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;

    if((x1==x2 and !(a==0 and b==0)) or (y1==y2 and !(c==0 and d==0)))
    {
        cout<<"No"<<endl;
        return;
    }
    if(x1>x+b-a or x2<x+b-a)
    {
        cout<<"No"<<endl;
        return;
    }
    else if(y1>y+d-c or y2<y+d-c)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
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