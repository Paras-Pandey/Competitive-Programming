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

string str = "abcdefghijklmnopqrstuvwxyz";

int ispre(string a, string b)
{
    int i=0, j=0;
    while(i<a.length() and j<b.length())
    {
        if(a[i]==b[j])
            i++, j++;
        else
            i++;
    }
    if(j==b.length())
        return i;
    return -1;
}

void sol()
{
    int n, m;
    cin>>n;
    string s;
    cin>>s>>m;
    int num = n/26;
    string nstr = str;
    while(num--)
        nstr += str;
    nstr = nstr.substr(0, m);
    if(n==m)
    {
        if(s==nstr)
            cout<<0<<endl;
        else
            cout<<-1<<endl;
        return;
    }

    int ch = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int an = ispre(s.substr(i), nstr);
        if(an!=-1)
            ch = min(ch, an-m);
    }

    if(ch==INT_MAX)
        cout<<-1<<endl;
    else
        cout<<ch<<endl;
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