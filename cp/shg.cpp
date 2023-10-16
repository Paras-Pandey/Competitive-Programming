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

bool pansucc(int freq[]) {
    for(int i = 0; i < 26; i++)
        if(freq[i] == 0)
    return false;
}

int solve(int input1, string input2[], int input3[]) {
    int freq[26] = {0};

    int i = 0, ans = input1;
    for(int j = 0; j < input1; i++) {
        for(int k = 0; k < input3[j]; k++) {
            freq[input2[j][k] - 'a']++;
        }
        while(1) {
            int curfreq[26] = {0};
            for(int j = 0; j < input3[i]; j++) {
                curfreq[input2[i][j] - 'a']++;
            }
            bool canrem = true;
            for(int j = 0; j < 26; j++) {
                if(freq[j] - curfreq[j] <= 0)
                    canrem = false;
            }
            if(!canrem)
                break;
            for(int j = 0; j < 26; j++) {
                freq[j] -= curfreq[j];
            }
            i++;
        }

        if(pansucc)
            ans = min(ans, j - i + 1);
    }

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}