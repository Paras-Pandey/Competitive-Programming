#include"bits/stdc++.h"
using namespace std;

#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

const long long N = 228228;
vector<long long> ver[N];
long long m, o, n, x, y, arr[N];

void solve(int v, int d, int c)
{
    if(c>m)
        return;
    int pa = 1;
    for(int i=0; i<ver[v].size(); i++)
    {
        if(ver[v][i]!=d)
            pa = 0;
        solve(ver[v][i], v, c*arr[ver[v][i]]+arr[ver[v][i]]);
    }
    o+=pa;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m;

    for(int i=0; i<n; i++)  cin>>arr[i];
    for(int i=1; i<n; i++)
    {
        cin>>x>>y;
        x--, y--;
        ver[x].push_back(y);
        ver[y].push_back(x);
    }

    solve(0, -1, arr[0]);
    cout<<o<<endl;
    return 0;
}