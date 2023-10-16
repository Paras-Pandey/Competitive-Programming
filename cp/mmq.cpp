#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    unordered_map<int, pair<int, int>> mp;
    int r;
    cin>>r;
    for(int i = 0; i < r; i++) {
        int rn, s, e;
        cin>>rn>>s>>e;

        if(mp.find(rn) != mp.end())
            mp[rn] = {min(mp[rn].first, s), max(mp[rn].second, e)};
        else
            mp[rn] = {s, e};
    }

    long long ans = n * m;
    for(auto i: mp) {
        ans -= (i.second.second - i.second.first + 1);
    }

    cout<<ans<<endl;
}