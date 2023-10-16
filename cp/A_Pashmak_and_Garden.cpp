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
    
    int a, b, c, d, e, f, g, h;
    cin>>a>>b>>c>>d;

    if(a==c || b==d)
    {
        if(a==c)
        {
            f=b, h=d;
            e=c+abs(b-d);
            g=c+abs(b-d);
            cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
        }
        else
        {
            e=a, g=c;
            f=b+abs(a-c);
            h=b+abs(a-c);
            cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
        }
    }
    else
    {
        if(abs(a-c)==abs(b-d))
        {
            // if(a<c)
            {
                e = a;
                f = d;
                g = c;
                h = b;
            }
            cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}