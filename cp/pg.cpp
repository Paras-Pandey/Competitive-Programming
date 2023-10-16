#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;

    vector<string> arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int ans = 0;
    unordered_map<string, int> freq;
    for(int i = 0, j = 0; i < n; i++) {
        freq[arr[i]]++;
        while(freq[arr[i]] > 1) {
            freq[arr[j]]--;
            j++;
        }
        ans = max(ans, i - j + 1);
    }

    cout<<min(ans, x)<<endl;
}