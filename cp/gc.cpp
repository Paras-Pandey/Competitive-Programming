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

int solve(int input1, int input2[], int input3[]) {
    int i = 0, j = input1 - 1;

    int ans = 0;
    while(i <= j) {
        if(input2[i] < input3[i] || input2[j] < input3[j])
            return -1;
        if(i + 1 == j) {
            if(input2[i] - input3[i] != input2[j] - input3[j])
                return -1;
            ans += input2[i] - input3[i];
            i++;
            j--;
            break;
        }
        ans += input2[i] - input3[i];
        input2[i + 1] -= input2[i] - input3[i];
        ans += input2[j] - input3[j];
        input2[j - 1] -= input2[j] - input3[j];
        i++;
        j--;
    }
    if(i == j and input2[i] != input3[i])
        return -1;
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        int arr[4] = {2, 3, 2, 1};
        int brr[4] = {1, 1, 1, 1};
        cout<<solve(4, arr, brr);
    }
    return 0;
}