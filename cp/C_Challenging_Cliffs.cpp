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

        sort(arr, arr+n);
        int j = 1, mindif = INT_MAX, sw = 0;
        while(j<n)
        {
            if(arr[j-1]==arr[j])
            {
                sw = j;
                break;
            }
            else
            {
                int dif = abs(arr[j]-arr[j-1]);
                if(mindif>dif)
                {
                    sw = j;
                    mindif = dif;
                }
            }
            j++;
        }

        int ssw = arr[sw-1], gsw = arr[sw];
        vector<int> ans;
        ans.pb(ssw);

        for(int i=sw+1; i<n; i++)
        {
            ans.pb(arr[i]);
        }

        for(int i = 0; i<sw-1; i++)
        {
            ans.pb(arr[i]);
        }
        ans.pb(gsw);

        for(auto i:ans)
            cout<<i<<" ";

        cout<<endl;
    }
    return 0;
}