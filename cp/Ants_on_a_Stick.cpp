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

void solve(int k)
{
    int n, l;
    cin >> n >> l;

    vector<pair<int, int>> pos;
    vi dir(n);
    int p;
    go(i, 0, n - 1)
    {
        cin >> p >> dir[i];
        pos.pb({p, i});
    }
    vi ans;
    int s = 0, e = n-1;
    while(ans.size()<n) {
        sort(all(pos));
        vi temp;
        bool lst = 0;
        for(int i=s; i<e; i++) {
            if(pos[i+1].first-pos[i].first<=1 and dir[pos[i].second]!=dir[pos[i+1].second]) {
                if(i==e-1)
                    lst = 1;
                swap(dir[pos[i].second], dir[pos[i+1].second]);
                pos[i].first += (dir[pos[i].second]==1)?1:-1;
                pos[i+1].first += (dir[pos[i+1].second]==1)?1:-1;
                if(pos[i].first<0 or pos[i].first>l) {
                    if(i==s)
                        s++;
                    temp.pb(pos[i].second+1);
                }
                if(pos[i+1].first<0 or pos[i+1].first>l) {
                    if(i==e-1)
                        e--;
                    temp.pb(pos[i+1].second+1);
                }
            }
            else {
                pos[i].first += (dir[pos[i].second]==1)?1:-1;
                if(pos[i].first<0 or pos[i].first>l) {
                    if(i==s)
                        s++;
                    temp.pb(pos[i].second+1);
                }
            }
        }
        if(!lst) {
            pos[e].first += (dir[pos[e].second]==1)?1:-1;
            if(pos[e].first<0 or pos[e].first>l) {
                temp.pb(pos[e].second+1);
                e--;
            }
        }
        sort(all(temp));
        ans.insert(ans.end(), all(temp));
    }

    cout<<"Case #"<<k<<": ";
    for(auto i: ans)
        cout<<i<<" ";
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t = 1;
    cin >> t;
    int i = 1;
    while (t--)
    {
        solve(i++);
    }
    return 0;
}