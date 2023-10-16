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

bool comp(pii a, pii b)
{
    if(b.first<a.first) return true;

    else if(b.first == a.first) return b.second<a.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n, x, y;
        cin>>n;

        vector<pii> arr;
        FOR(i, n)   
        {
            cin>>x>>y;
            arr.pb(make_pair(x, y));
        }

        sort(arr.begin(), arr.end());

        string s = "";
        int xdif = arr[0].first, ydif = arr[0].second;
        while(xdif--)   s+="R";
        while(ydif--)   s+="U";
        
        for(x=1; x<n; x++) 
        {
            xdif = arr[x].first-arr[x-1].first, ydif = arr[x].second-arr[x-1].second;
            if(ydif<0 or xdif<0)    break;
            while(xdif--)   s+="R";
            while(ydif--)   s+="U"; 
        }
        if(x<n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl<<s<<endl;
    }
    return 0;
}