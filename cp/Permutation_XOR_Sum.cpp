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

lld flip(lld n){
    lld num = 0,cnt = 0;
    while(n){
        if(n%2 == 0) 
            num += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; 
    cin>>tc;
    whilecase{
        lld n, ans = 0; 
        cin>>n;
        
        while(n > 0)
        {
            lld a = flip(n);
            lld b = n;
            if((b&(b+1)) == 0) b--;
            lld val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}