#include "bits/stdc++.h"
using namespace std;

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define whilecase while (tc--)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define cinstr cin >> str
#define getstr getline(cin, str)
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define in insert
typedef unsigned long long llu;
typedef long long lld;
typedef unsigned int U;
#define endl "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit(int n, int x) { return n | (1 << x); }
int ClearBit(int n, int x) { return n & ~(1 << x); }
int ToggleBit(int n, int x) { return n ^ (1 << x); }
bool CheckBit(int n, int x) { return (bool)(n & (1 << x)); }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    whilecase
    {
        int n;
        cin >> n;

        vector<unsigned long long> ans;
        llu y = 2;
        if (n == 1)
            cout << 1 << " " << 1 << endl;
        else if(n==2)
            cout<< 1<< " "<<1<< " "<<2<<endl;
        else
        {
            int size = n;
            ans.pb(y);
            n--;
            while (n--)
            {
                ans.pb(y);
                y *= 2;
            }
            llu x = ans[ans.size() - 1];
            ans.pop_back();
            ans.pb((x / 2) - 1);
            ans.pb((x / 2) + 1);
            sort(begin(ans), end(ans));
            for (auto i : ans)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}