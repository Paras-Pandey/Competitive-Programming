#include"bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    stack<int> s;
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        while(s.size() and s.top() >= arr[i])
            s.pop();

        if(s.size())
            ans[i] = s.top();
        else
            ans[i] = -1;
    }

    return ans;
}