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


void sol()
{
    int n;
        cin >> n;
        vector<int>a(n), ans;
        int cnt0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!a[i]) cnt0++;
        }
        int cnt1 = n - cnt0;
        if (cnt0 >= n / 2) {
            cout << cnt0 << '\n';
            for (int i = 0; i < cnt0; i++) cout << 0 << ' ';
        } else {
            cout << cnt1 - cnt1 % 2 << '\n';
            for (int i = 0; i < cnt1 - cnt1 % 2; i++) {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        sol();
    }
    return 0;
}