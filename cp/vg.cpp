#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    unordered_map<int, int> freq;
    vector<int> arr(n);
    for(auto &i: arr) {
        cin>>i;
        freq[i]++;
    }

    set<int> dist(arr.begin(), arr.end());

    int ans = INT_MAX;
    for(int i = 1; i <= n; i++) {
        int curv = i * k;
        for(auto j: freq) {
            if(j.second <= i)
                continue;
            curv += (j.second / i) * i + (j.second % i);
        }
        ans = min(curv, ans);
    }

    cout<<ans<<endl;
}