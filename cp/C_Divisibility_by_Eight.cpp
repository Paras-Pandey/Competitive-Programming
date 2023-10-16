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

bool searchch(string s, int x, char c)
{
    for(int i = x; i<s.length(); i++)
    {
        if(s[i]==c)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    bool flag = 0;
    FOR(i, s.length()) 
    {
        if(s[i]=='0' or s[i]=='8')
        {
            cout<<"YES"<<endl<<s[i];
            flag = 1;
            break;
        }
        else if(s[i]=='1')
        {
            if(searchch(s, i+1, '6'))
            {    
                cout<<"YES"<<endl<<"16";
                break;
            }
            else if(searchch(s, i+1, '2'))
            {
                cout<<"YES"<<endl<<"12";
            }
        }
    }
    return 0;
}