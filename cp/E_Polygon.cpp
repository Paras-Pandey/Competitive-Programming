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

        char **arr = new char*[n];
        FOR(i, n)   arr[i] = new char[n];

        FOR(i, n)
        {
            FOR(j, n)
            {
                cin>>arr[i][j];
            }
        }

        bool valid = true;
        FOR(i, n)
        {
            FOR(j, n)
            {
                if(arr[i][j]=='1' and !(i==n-1 or j==n-1))
                {
                    if(arr[i+1][j]=='1' or arr[i][j+1]=='1')
                        continue;
                    else 
                    {
                        valid = false;
                        break;
                    }
                }
                if(!valid)
                    break;
            }
        }
        if(valid)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}