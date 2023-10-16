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

void sol()
{
    int n;
    cin>>n;

    vector<int> ar(n);
    for(auto &i: ar)    cin>>i;

    int i, dis;

    for(i=1; i<n; i++)
    {
        if(ar[i]!=ar[i-1])
            break;
    }
    if(i==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(i=1; i<n; i++)
    {
        if(ar[i]!=ar[0])
        {
            dis = i+1;
            cout<<1<<" "<<i+1<<endl;
        }
    }

    for(i = 1; i<n; i++)
    {
        if(ar[i]==ar[0])
            cout<<dis<<" "<<i+1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        sol();
    }
    return 0;
    
}