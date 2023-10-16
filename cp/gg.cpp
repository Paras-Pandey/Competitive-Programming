#include"bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];

        int nogroups = n / k + (n % k != 0);

        sort(arr.rbegin(), arr.rend());
        long long left = n, ans = 0;

        for(int i = 0; i < nogroups; i++) {
            ans += (1ll * arr[i] * ((left >= k) ? k : left));
            left -= k;
        }    

        cout<<ans<<endl;
    }
}