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

        int val[n], type[n];
        FOR(i, n)   cin>>val[i];
        FOR(i, n)   cin>>type[i];

        bool flag = 0;
        for(int i=0; i<n-1; i++)
        {
            if(type[i]!=type[i+1])
                flag = 1;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else 
        {
            int sorted[n];
            copy(val, val+n, sorted);
            sort(sorted, sorted+n);
            // for(int i=0; i<n; i++)  
            //     cout<<val[i]<<" "<<sorted[i]<<endl;
            FOR(i, n)   if(sorted[i]!=val[i])   flag=1;
            if(flag)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}