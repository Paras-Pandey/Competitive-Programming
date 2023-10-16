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

int dp[25][25][25][4];

set<vector<int>> arr, farr;
map<vector<int>, int> coins;

int ncoins(int coins, char op, int operand) {
    if(op == '*')
        return coins * operand;
    if(op == '+')
        return coins + operand;
    if(op == '-')
        return coins - operand;
    return coins / operand;
}

int sol(int n, int m, int sx, int sy, int p, vector<char> &op, vector<int> &operand) {
    if(p > 0 and m == 0)
        return INT_MIN;
    int res = 0;
    if(sx > 0)
        res = max(res, sol(n, m - 1, sx - 1, sy, p, op, operand) + ncoins(res, op[0], operand[0]));
    if(sy > 0)
        res = max(res, sol(n, m - 1, sx, sy - 1, p, op, operand) + ncoins(res, op[1], operand[1]));
    if(sy < n - 1)
        res = max(res, sol(n, m - 1, sx, sy + 1, p, op, operand) + ncoins(res, op[2], operand[2]));
    if(sx < n - 1)
        res = max(res, sol(n, m - 1, sx + 1, sy, p, op, operand) + ncoins(res, op[3], operand[3]));
    if(arr.find({sx, sy}) != arr.end()) {
        arr.erase({sx, sy});
        res += coins[{sx, sy}];
    }

    if(sx > 0)
        res = max(res, sol(n, m - 1, sx - 1, sy, p - 1, op, operand) + ncoins(res, op[0], operand[0]));
    if(sy > 0)
        res = max(res, sol(n, m - 1, sx, sy - 1, p - 1, op, operand) + ncoins(res, op[1], operand[1]));
    if(sy < n - 1)
        res = max(res, sol(n, m - 1, sx, sy + 1, p - 1, op, operand) + ncoins(res, op[2], operand[2]));
    if(sx < n - 1)
        res = max(res, sol(n, m - 1, sx + 1, sy, p - 1, op, operand) + ncoins(res, op[3], operand[3]));
    
}
void solve(int i) {
    int n, p, m, sx, sy;
    cin>>n>>p>>m>>sx>>sy;

    vector<int> operand;
    vector<char> op(4);

    for(int i = 0; i < 4; i++) {
        cin>>op[i];
        cin>>operand[i];
    }

    for(int i = 0; i < n; i++) {
        vector<int> temp(3);
        cin>>temp[0]>>temp[1];
        arr.insert(temp);
        int coin;
        cin>>coin;
        coins[temp] = coin;
    }

    cout<<"Case #"<<i<<": "<<sol(n, m, sx, sy, p, op, operand);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    cin>>t;
    int i = 1;
    while(t--) {
        solve(i++);
    }
    return 0;
}