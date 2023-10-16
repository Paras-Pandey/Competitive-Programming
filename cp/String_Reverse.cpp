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

int main() {
    int tc;
    cin>>tc;

    whilecase {
        string s;
        cin>>s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        int n = s.length();

        int ans = 0;
        for(int i=n-1, j=n-1; i>=0;) {
            while(i>=0 and s[j]!=rev[i]) {
                i--;
                ans++;
            }
            if(i>=0)
            {
                i--;
                j--;
            }
        }

        cout<<ans<<endl;
    }
}