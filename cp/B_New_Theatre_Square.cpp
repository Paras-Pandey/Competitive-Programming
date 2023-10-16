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
        int n, m, x, y;
        cin>>n>>m>>x>>y;

        vector<string> th;
        string str;
        for(int i=0; i<n; i++)
        {
            cinstr;
            th.pb(str);
        }
        int cons=0, sing=0;
        for(auto s: th)
        {
            for(int i=0; i<m; i++)
            {
                if(s[i]=='.')
                {
                    if(s[i+1]=='.')
                        cons++, i++;
                    else 
                        sing++;
                }
            }
        }
        if(2*x<y)
        {
            cout<<(cons*2+sing)*x<<endl;
        }
        else
        {
            cout<<cons*y+sing*x<<endl;
        }


    }
    return 0;
}