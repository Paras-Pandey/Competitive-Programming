#include"bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<double> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;

    int ans = 0;
    while(i <= j) {
        if(i == j) {
            ans++;
            break;
        }
        else if(arr[i] + arr[j] <= 3) {
            ans++;
            i++;
            j--;
        }
        else  {
            ans++;
            j--;
        }
    }

    cout<<ans<<endl;
}