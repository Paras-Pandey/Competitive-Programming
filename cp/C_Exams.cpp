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
    
    int n;
    cin>>n;

    // multimap <llu, llu> papers;
    // llu x, y;
    // FOR(i, n)
    // {
    //     cin>>x>>y;
    //     papers.insert({x, y});
    // }
    // llu z = 0, sec = 0, a = 0;
    // for(auto x:papers)
    // {
    //     if(!(x.second>=z) and x.first!=a)
    //         sec = 1;
    //     if(x.first == a)
    //         {
    //             if(x.second > z)
    //                 z = x.second;
    //         }
    //     else
    //         z = x.second;
    //     a = x.first;
    // }
    // if(z<a and !sec)
    //     cout<<z<<endl;
    // else
    //     cout<<a<<endl;

    vector<pair<lld, lld>> papers;
    llu x, y;
    FOR(i, n)
    {
        cin>>x>>y;
        papers.pb({x, y});
    }
    lld sec = -1;
    sort(papers.begin(), papers.end());
    bool flag = 0;
    for(int i=0; i<n; i++)
    {
        if(sec<=papers[i].second)
            sec = papers[i].second;
        else
            sec = papers[i].first;
    }
    cout<<sec<<endl;
    return 0;
}