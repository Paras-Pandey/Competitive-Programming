#include"bits/stdc++.h"
using namespace std;

int sol(int input1, int input2[]) {
    int ans = input2[0];
    int cs = input2[0];

    for(int i = 1; i < input1; i++) {
        if(cs + input2[i] < input2[i])
            cs = input2[i];
        else    
            cs += input2[i];
        ans = max(ans, cs);
    }

    return ans;
}

int main() {
    int arr[3] = {3, -1, 2};
    cout<<sol(3, arr);
}