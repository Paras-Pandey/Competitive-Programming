#include"bits/stdc++.h"
using namespace std;

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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n;
        cin>>n;

        set<pair<int, int>> ms;
        int l1 = -1, l2 = -1, l3 = -1, l4 = -1;
        for(int i=0; i<n; i++)
        {
            pair<int, int> p;
            cin>>p.first>>p.second;
            if(p.first==1)
            {
                l1 = 1;
                l2 = p.second;
            }
            if(p.second == n)
            {
                l3 = p.first;
                l4 = n;
            }
            ms.insert(p);
        }
        bool flag = false;
        if(l1==1)
        {
            while(l2>=1 and ms.find(make_pair(l1, l2))!=ms.end())
            {
                l1++;
                l2--;
            }
            if(l2==0)
            {
                flag = true;
            }
        }
        if(l4==n)
        {
            while(l3<=n and ms.find(make_pair(l3, l4))!=ms.end())
            {
                l3++;
                l4--;
            }
            if(l3==n+1)
            {
                flag = true;
            }
        }
        cout<<(flag ? "NO" : "YES")<<endl;
    }
    return 0;
}