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

const int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    {
        int n, m;
        cin>>n>>m;

        vector<int> inamt(n);
        for(auto &i: inamt) { 
            cin>>i;
        }   

        int reacnt = 0;
        while(reacnt<m) {
            int ele, disele;
            cin>>ele>>disele;
            while(disele--) {
                int eledis, amt;
                cin>>amt>>eledis;
                
                inamt[eledis-1]=(1ll*inamt[eledis-1]+(1ll*inamt[ele-1])*amt)%mod;
            }
            inamt[ele-1] = 0;
            reacnt++;
        }

        for(auto i: inamt)
            cout<<i<<endl;
    }
    return 0;
}