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

bool check(int l, int r, vector<int> & precomp) {
    if(precomp[l-1]==precomp[r])
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase {
        int n, q;
        cin>>n>>q;

        string a, b;
        cin>>a>>b;

        vector<int> precomp(n);
        for(int i=0; i<n; i++) {
            precomp[i] = b[i]-a[i];
            if(precomp[i]<0)
                precomp[i] += 26;
        }

        for(int i=1; i<n; i++) {
            precomp[i] -= precomp[i-1];
            if(precomp[i]<0)
                precomp[i] += 26;
        }

        while(q--) {
            int l, r;
            cin>>l>>r;
            int sum = 0;
            sum = (l*s[])
        }
    }
    return 0;
}