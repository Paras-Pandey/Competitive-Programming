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

bool ispos(vector<lld> arr, lld n, lld k, lld h)
{
    lld ch = 0;
    for(auto i:arr)
    {
        if(i>h)
            ch+=i-h;
    }
    if(ch>=k)
        return true;
    return false;
}

int sol(lld n, lld k, vector<lld> arr)
{
    lld maxh = *max_element(arr.begin(), arr.end());
    lld minh = 0;

    lld midh = minh + (maxh-minh)/2, ans = -1;
    while(minh<=maxh)
    {
        if(ispos(arr, n, k, midh))
        {
            ans = midh;
            minh = midh + 1;
        }
        else
        {
            maxh = midh - 1;
        }
        midh = minh + (maxh-minh)/2;
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lld n, k;
    cin>>n>>k;

    vector<lld> arr(n);
    for(auto &i : arr)  cin>>i;
    cout<<sol(n, k, arr);
    return 0;
}