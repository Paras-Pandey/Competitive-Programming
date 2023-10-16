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
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(n<=k)
        {
            if(s.find('1')==-1)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else 
        {
            int occ = 0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    int j = i;
                    for (; j>=0 and j>=i-k; j--)
                        s[j]='2';
                    for(j=i; j<n and j<=i+k; j++)
                        s[j] = '2';
                    i = j-1;
                }
            }
            for(int i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    occ++;
                    int j = i+1;
                    while(s[j]=='0' and j<n)
                        j++;
                    occ+=(j-i-1)/(k+1);
                    i = j-1;
                }
            }
            cout<<occ<<endl;
        }
    }
    return 0;
}