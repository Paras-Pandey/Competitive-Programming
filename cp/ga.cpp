#include "bits/stdc++.h"
using namespace std;

#define go(i, s, n) for (int i = (s), end = (n); i <= end; i++)
#define rgo(i, s, n) for (int i = (s), end = (n); i >= n; i--)
#define getstr getline(cin, str)
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define int long long
typedef unsigned long long llu;
#define endl "\n"
const int MOD = 1000000007;
int SetBit(int n, int x) { return n | (1 << x); }
int ClearBit(int n, int x) { return n & ~(1 << x); }
int ToggleBit(int n, int x) { return n ^ (1 << x); }
bool CheckBit(int n, int x) { return (bool)(n & (1 << x)); }

template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
};
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
};
const long long INF = 1e18;

const int N = 0;

vector<int> sol(int N, int X, vector<int> &A)
{
    auto comp = [](const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second < b.second and a.first <= b.first;
    };

    set<pair<int, int>, decltype(comp)> ms(comp);

    for (int i = 0; i < N; i++)
    {
        ms.insert({A[i], i});
    }

    vector<int> nxg(N);
    for (int i = 0; i < N; i++)
    {
        ms.erase({A[i], i});
        cout << A[i] + X << " " << i + 1 << endl;
        auto f = ms.lower_bound({A[i] + X, i + 1});
        if (f == ms.end())
        {
            nxg[i] = -1;
        }
        else
        {
            nxg[i] = f->second;
        }
    }

    for (int i = 0; i < N; i++)
    {
        ms.insert({A[i], i});
    }

    vector<int> snxg(N);
    for (int i = 0; i < N; i++)
    {
        ms.erase({A[i], i});
        if (nxg[i] == -1)
        {
            snxg[i] = -1;
            continue;
        }
        auto f = ms.lower_bound({A[i] + X, nxg[i] + 1});
        if (f == ms.end())
        {
            snxg[i] = -1;
        }
        else
        {
            snxg[i] = f->first;
        }
    }

    for(auto i: snxg)
        cout<<i<<" ";
    return snxg;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        vector<int> A = {1, 2, 3, 4, 7, 6, 7};
        sol(7, 2, A);
    }
    return 0;
}