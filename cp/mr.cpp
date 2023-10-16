#include"bits/stdc++.h"
using namespace std;

long findMaximumSum(vector<int> &stockPrice, int k) {
    long ans = 0, cs = 0;

    int n = stockPrice.size();
    unordered_map<int, int> uniq;

    for(int i = 0; i < k - 1; i++) {
        cs += stockPrice[i];
        uniq[stockPrice[i]]++;
    }

    for(int i = k - 1; i < n; i++) {
        if(i - k >= 0) {
            uniq[stockPrice[i - k]]--;
            if(uniq[stockPrice[i - k]] == 0)
                uniq.erase(stockPrice[i - k]);
            cs -= stockPrice[i - k];
        }
        uniq[stockPrice[i]]++;
        cs += stockPrice[i];
        if(uniq.size() == k)
            ans = max(cs, ans);
    }

    return ans;
}