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
    
    lld n, m;
    cin>>n>>m;
    if(n==m)
        cout<<0;
    
    else if(m%n!=0)
        cout<<-1;
    else
    {
        int count = 0;
        m/=n;
        while(m>1)
        {
            if(m%2==0)
                m/=2, count++;
            else if(m%3==0)
                m/=3, count++;
            else 
                break;
        }
        if(m==1)
            cout<<count;
        else
            cout<<-1;
    }
    
    return 0;
}