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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    llu int n, m;
    cin>>n>>m;
    llu int tempp = n;
    llu int kmin=0, kmax=0;
    if(m==n)
    {
        cout<<0<<" "<<0;
    }
    else
    {
        tempp-=m-1;
        kmax= tempp*(tempp-1)/2;
        if(m==1)
        {
            cout<<kmax<<" "<<kmax;
        }
        else
        {
            tempp = n;
            if(tempp%m==0)
            {
                kmin=((tempp/m)*((tempp/m)-1)/2)*m;
            }
            else
            {
                kmin=((tempp/m)*((tempp/m)-1)/2)*(m-tempp%m);
                kmin+=((tempp/m+1)*(tempp/m)/2)*(tempp%m);
            }
            if(kmin>=kmax)
                cout<<kmin<<" "<<kmin;
            else
                cout<<kmin<<" "<<kmax;
        }
            
    }
    return 0;
}