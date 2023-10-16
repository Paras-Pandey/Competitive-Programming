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
        string s;
        cin>>s;

        int a[3] = {0};
        int j = 0, i = 0, size = INT_MAX;
        for(i = 0; i < s.length(); i++)
        {
            if(s[i]=='1')
                a[0]++;
            else if(s[i]=='2')
                a[1]++;
            else
                a[2]++;
            if(a[0]>0 and a[1]>0 and a[2]>0)
            {
                while(a[s[j]-'1']-1>0)
                    a[s[j]-'1']--, j++;
                size = min(i-j+1, size);
            }
        }
        if(a[0]>0 and a[1]>0 and a[2]>0)
            size = min(i-j, size);
        if(size == INT_MAX)
            size = 0;
        cout<<size<<endl;
    }
    return 0;
}