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
    
    int n;
    cin>>n;

    string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    if(n<=5)
        cout<<name[n-1]<<endl;
    else
    {
        vector<long long> bra;
        long long N = 1e9, x=5, j=1;
        do
        {
            bra.pb(x);
            j*=2;
            x+=j*5;
        }while(x<=N);
        
        bra.pb(x);
        for(long long i=0; i<bra.size(); i++)
        {
            if(bra[i]>=n)
            {
                long long y = n-bra[i-1];
                long long k = y/pow(2,i)+(y%(int)(pow(2,i))!=0);
                cout<<name[k-1]<<endl;
                break;
            }
        }
    }
    
    return 0;
}