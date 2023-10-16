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
    
    int d, s, mn, mx, smn = 0, smx = 0;
    vector<int> mint, maxt;
    cin>>d>>s;

    for(int i=0; i<d; i++) {
        cin>>mn>>mx;
        smn += mn;
        smx += mx;
        mint.pb(mn), maxt.pb(mx);
    }

    if(s>=smn and s<=smx) {
        vector<int> ans(d);
        for(int i=0; i<d; i++) {
            ans[i] = mint[i];
        }
        int anss = smn;
        while(anss<s) {
            for(int i=0; i<d; i++) {
                if(anss==s) break;
                if(ans[i]<maxt[i]) {
                    ans[i]++;
                    anss++;
                }
            }
        }
        cout<<"YES"<<endl;
        for(int i=0; i<d; i++) {
            cout<<ans[i]<<" ";
        }
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}