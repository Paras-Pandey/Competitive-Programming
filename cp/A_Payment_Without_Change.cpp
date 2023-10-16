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

int gcd(int a, int b, int &x, int &y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x0, y0;
    int g = gcd(b, a%b, x0, y0);
    x = y0;
    y = x0 - (a/b)*y0;
    return g;
}

void sol(int a, int b, int &x, int &y, int c)
{
    int g = gcd(a, b, x, y);
    int temp = c/g;
    x = x*temp;
    y = y*temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        llu a, b, n, k;
        cin>>a>>b>>n>>k;
        
        if(b>=k)
            cout<<"YES"<<endl;
        else if(k%n==0)
        {
            if((k/n)<=a)
                cout<<"YES"<<endl;
            else
            {
                if(a*n+b>=k)
                    cout<<"YES"<<endl;
                else 
                    cout<<"NO"<<endl;
            }
        }
        else  
        {   
            if((a*n + b)>=k) 
            {
                llu sum = 0, flag = 0, noa = k/n;
                if(noa<=a)
                {
                    if(k-noa*n<=b)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
                else
                {
                    if(k-a*n<=b)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
            else 
                cout<<"NO"<<endl;
        }
    }
    return 0;
}