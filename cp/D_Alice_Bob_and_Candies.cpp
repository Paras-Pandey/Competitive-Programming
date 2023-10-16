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

        int *arr = new int[n];
        FOR(i, n)   cin>>arr[i];

        int i = 0, j = n-1, ea = 0, eb = 0, m = 0, ta = 0, tb = 0;
        while(i<=j)
        {
            while(ea<=eb)
            {
                if(i>j)
                    break;
                ea+=arr[i], ta+=arr[i], i++;
            }
            if(ea>eb or ea>0)
                m++;
            eb = 0;
            while(eb<=ea)
            {
                if(j<i)
                    break;
                eb+=arr[j], tb+=arr[j], j--;
            }
            if(eb>ea or eb>0)
                m++;
            ea = 0;
        }
        cout<<m<<" "<<ta<<" "<<tb<<endl;
    }
    return 0;
}