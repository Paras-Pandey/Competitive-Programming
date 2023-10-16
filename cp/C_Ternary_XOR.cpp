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
        int n;
        cin>>n;

        string str;
        cinstr;
        string a = "1", b = "1";
        int i = 1;
        while(str[i]!='1' and i<n)
        {
            if(str[i]=='2')
                a+='1', b+='1';
            else
                a+='0', b+='0';
            i++;
        }
        if(i<n)
            a+='1', b+='0', i++;
        for(; i<n; i++)
        {
            if(str[i]=='2')
                a+='0', b+='2';
            else if(str[i]=='0')
                a+='0', b+='0';
            else
                a+='0', b+='1';
        }
        cout<<a<<endl<<b<<endl;
    }
    return 0;
}