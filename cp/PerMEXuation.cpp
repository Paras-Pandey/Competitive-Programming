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

void sol() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(s[1]=='0' or s[0]=='0' or s[n]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> ans;
    ans.push_back(0);
    for(int i=2; i<n; i++) {
        if(s[i]=='0')
            ans.push_back(i);
    }

    for(int i=1; i<n; i++) {
        if(s[i]=='1')
            ans.push_back(i);
    }

    cout<<"YES"<<endl;
    for(auto i : ans)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase {
        sol();
    }
    return 0;
}