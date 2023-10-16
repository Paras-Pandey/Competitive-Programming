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
        llu a, b, x, y, z;
        cin>>a>>b;
        if(b==1)
            cout<<"NO"<<endl;
        else
        {
            if(b==2)
            {
                x = a, y = 3*a;
                z = 2*a*b;
            }
            else
            {
                if(b%2==0)
                    x = (b/2-1)*a, y = (b/2+1)*a;
                else
                    x = (b/2)*a, y = (b/2+1)*a;
                z = a*b;
            }
            cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
        } 
        
    }
    return 0;
}