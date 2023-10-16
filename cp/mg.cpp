#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    auto comp = [](pair<int, int> &a, pair<int, int> &b) {
        if(a.first + a.second == b.first + b.second)
            return a.first > b.first;
        return a.first + a.second < b.first + b.second;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>, decltype(comp)> pq(comp);
}