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

    whilecase {
        int n, m;
        cin>>n>>m;

        vector<int> pers(n), gifts(m);
        for(auto &i: pers)  cin>>i;
        for(auto &i: gifts) cin>>i;

        sort(pers.begin(), pers.end());

        llu cost = 0;
        int j = 0, i;
        for(i=n-1; i>=0; i--) {
            if(j<=pers[i]-1 and j<m)
                cost += gifts[j], j++;
            else
                break;
        }

        for(; i>=0; i--) {
            cost += gifts[pers[i]-1];
        }
        
        cout<<cost<<endl;
    }
    return 0;
}