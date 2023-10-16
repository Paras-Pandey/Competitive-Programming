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

void rev(string &s)
{
    for(int i=0; i<s.length(); i++)
    {
        s[i] = '0' + ('1'-s[i]);
    }

    int i = 0, j = s.length()-1;
    
    while(i<j)
        swap(s[i++], s[j--]);
}
void sol()
{
    int n;
    cin>>n;

    string a, b;
    vector<int> ans;
    cin>>a>>b;

    int i = n-1, j = 0, l;
    
    for(; i>=0; i--)
    {
        if(a[i]!=b[i])
        {
            if(a[0]==b[i])
            {
                a[0] = '0' + ('1'-a[0]);
                ans.pb(1);
            }
            rev(a);
            ans.pb(i+1);
        }
        a = a.substr(0, i);
        b = b.substr(0, i);
    }
    l = ans.size();
    cout<<l<<" ";
    for(auto i: ans)
        cout<<i<<" ";
    cout<<endl;
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