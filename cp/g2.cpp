#include"bits/stdc++.h"
using namespace std;

#define go(i, s, n)         for (int i=(s), end=(n); i<=end; i++)
#define rgo(i, s, n)        for (int i=(s), end=(n); i>=n; i--)
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define all(x)              (x).begin(), (x).end()
#define sz(x)               (int)((x).size())
#define fr                  first
#define sc                  second
#define mem1(a)             memset(a, -1, sizeof(a))
#define mem0(a)             memset(a, 0, sizeof(a))
#define int                 long long
typedef unsigned long long  llu;
#define endl                "\n"
const int MOD = 1000000007;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

template<typename T, typename T1> T amax(T &a, T1 b) {if(b>a) a = b; return a;};
template<typename T, typename T1> T amin(T &a, T1 b) {if(b<a) a = b; return a;};
const long long INF = 1e18;

const int N = 0;

bool ispali(string str, int l = -1) {
    if(l == -1) {
        string nstr = str;
        reverse(nstr.begin(), nstr.end());
        return str == nstr;
    }
    else {
        if(l == 1)
            return false;
        bool chk1 = true, chk2 = true;
        int toadd = 0;
        if(str.length() % 2)
            toadd = 1;
        for(int i = 0; i < l; i++) {
            if(str[i] != str[l - 1 - i])
                chk1 = false;
            if(str[i + l + toadd] != str[2 * l - 1 - i])
                chk2 = false;
        }
        return chk1 | chk2;
    }
}
int halindrome(int input1, string input2[]) {
    int ans = 0;
    for(int i = 0; i < input1; i++) {
        if(ispali(input2[i]))
            ans++;
        else if(ispali(input2[i], input2[i].size() / 2))
            ans++;
    }
    
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    // cin>>t;
    while(t--) {
        string arr[4] = {"hahshs", "ccc", "as", "hah"};
        cout<<halindrome(4, arr);
    }
    return 0;
}