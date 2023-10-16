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

    int *p1 = new int[n+1], *p2 = new int[n+1];
    FOR(i, n)   cin>>p1[i+1];
    FOR(i, n)   cin>>p2[i+1];

    int *ind = new int[n+1];
    FOR(i, n)
    {
        ind[p2[i+1]] = i+1;
    }

    FOR(i, n)   
    {
        ind[p1[i+1]] -= (i+1);
    }

    int neg[n];
    int pos[n];
    memset(neg, 0, sizeof(neg));
    memset(pos, 0, sizeof(pos));
    

    for(int i=1; i<=n; i++)
    {   
        if(ind[i]<0)    pos[ind[i]+n]++, neg[abs(ind[i])]++;
        else if(ind[i]>0)    pos[ind[i]]++, neg[abs(ind[i]-n)];
        else    pos[0]++;
    }

    int negmax = *max_element(neg, neg+n), posmax = *max_element(pos, pos+n);
    cout<<max(negmax, posmax);
    return 0;
}