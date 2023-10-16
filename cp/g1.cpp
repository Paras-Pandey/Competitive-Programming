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
bool check(string &s, int n) {
    if(s.length() == 1)
        return true;
    
    int i = n, j = 0;
    for(; j < s.length(); j++, i++) {
        if(s[i % s.length()] != s[j])
            return false;
    }
    return true;
}

int rotateWords(char* input1, int input2) {
    string temp = "";
    int ans = 0;

    for(int i = 0; input1[i] != 0; i++) {
        if(temp.size() == 0 and input1[i] == ' ')
            continue;
        if(input1[i] == ' ') {
            if(check(temp, input2))
                ans++;
            temp = "";
        }
        else
            temp.push_back(input1[i]);
    }
    if(temp.size() == 0)
        return ans;
    if(check(temp, input2))
        ans++;

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        string s = "adbada abac a bbb";
        char arr[18];
        strcpy(arr, s.c_str());
        cout<<rotateWords(arr, 3);
    }
    return 0;
}