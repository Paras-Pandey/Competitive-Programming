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

lld divisors(int n)
{
    lld i, ans = 1;

    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i!=i)
                ans += n/i;
            ans+=i;
        }
    }

    return ans;
}

void sol()
{
    lld a, b, c;
    cin>>a>>b>>c;

    if(a%b!=0 or b>a)
    {
        cout<<-1<<endl;
        return;
    }
    lld num = (a/b)*c;

    lld sum = divisors(num);
    if(num==1 and sum==1 and a==1)
    {
        cout<<1<<endl;
        return;
    }
    if(sum+num==a)
        cout<<num<<endl;
    else
        cout<<-1<<endl;
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