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

int solve(){
   lld n, k; cin >> n >> k;
   string s; cin >> s;
   string inverted = "";
   for (int i = 0; i < s.size(); ++i) {
        inverted+= ((58-s[i])%10+48);
   }
   lld total = 0;
   lld prev = (inverted[0] - 48)%10;
   total += prev;
   vector<lld> totals;
   for(int i = 1; i < inverted.size(); i++){
       totals.pb(total);
       if(k < 0) {
           break;
       }
       lld curr = ((inverted[i] - 48))%10;
       if(curr > prev) {
           total += 10;
       }
       prev = curr;
   }
   totals.pb(total);
   lld i = 0;
   for(auto &a: totals){
       if(a > k) {
           break;
       }
       i++; 
   }
   cout << i << endl;
 
}
int main(){
    lld t; cin >> t;
    while(t--) solve();
}