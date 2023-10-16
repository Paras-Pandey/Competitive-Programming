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
        int n, k, pass = 1;
        cin>>n>>k;

        string s, ss;
        cin>>s;

        ss = s;
        sort(ss.begin(), ss.end());
        
        string ans = "";
        int j = 0, i, l;
        while(pass<k) {
            for(i=0; i<n; i++) {
                if(s[i]==ss[j]) {
                    ans += s[i];
                    s.erase(s.begin()+i);
                    l = i;
                    i--;
                    j++;
                    n--;
                }
            }
            pass++;
        }
        
        for(i=l; i<n; i++) {
            if(s[i]<=s[0]) {
                ans += s[i];
                s.erase(s.begin()+i);
                i--;
                n--;
            }
        }
        for(i=0; i<n; i++)
            ans += s[i];
        
        cout<<ans<<endl;
    }
    return 0;
}