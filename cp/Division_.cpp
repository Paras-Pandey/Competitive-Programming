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
    
    lld int n;
    cin>>n;

    lld int x, a, b;

    while(n--)
    {
        cin>>x>>a>>b;
        int temp = x;
        int evenno=0, oddno=0;
        for(int i=2; i*i<=temp; i++)   
        {
            if(x%i==0)
            {
                x/=i;
                if(i%2==0)
                    evenno++;
                else
                    oddno++;
                i-=1;
            }
        }
        if(x!=1)
            oddno++;
        if(a>=0 and b>=0)
        {
            cout<<a*evenno+b*oddno<<endl;
        }
        else if(a<=0 and b>=0)
        {
            if(evenno)
                cout<<a + b*oddno<<endl;
            else
                cout<<oddno*b<<endl;
        }
        else if(a>=0 and b<=0)
        {
            if(evenno)
                cout<<a*evenno<<endl;
            else 
                cout<<b<<endl;
        }
        else
        {
            if(evenno)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<b<<endl;
            }
        }
    }
    return 0;
}