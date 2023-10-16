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
    
    int n, e;
    cin>>n;

    vector<int> ele(n+1, 0), nele;
    ele[0] = 1; 
    int cnt = n;
    while(cnt--) {
        cin>>e;
        if(e<=n and ele[e]==0) {
            ele[e] = 1;
        }
        else {
            nele.pb(e);
        }
    }

    lld ans = 0;

    if(nele.size()>0) {
        sort(nele.begin(), nele.end());
        int j = 0;
        for(int i=1; i<=n; i++) {
            if(ele[i]==0) {
                ans += lld(abs(i-nele[j]));
                j++;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}