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
    
    string s;
    cin>>s;

    int n = s.length();

    int i = 0;

    for(; i<n-1 ;i++)
    {
        if((s[i]-'0')%2==0 and s[i]<s[n-1])
        {
            char ev = s[i];
            s[i] = s[n-1];
            s[n-1] = ev;
            break;
        }
    }

    if(i==n-1)
    {
        for(i = n-2; i>=0; i--)
        {
            if((s[i]-'0')%2==0)
            {
                char ev = s[i];
                s[i] = s[n-1];
                s[n-1] = ev;
                break;
            }
        }
    }
    if(i==-1)    cout<<-1<<endl;
    else    cout<<s<<endl;
    return 0;
}