#include"bits/stdc++.h"
using namespace std;

int sol(int input1, int input2, int input3[], int input4[]) {
    vector<int> prev(input2 + 1, 0), cur(input2 + 1, 0);

    for(int i = 0; i < input1; i++) {
        for(int j = input4[i]; j <= input2; j++) {
            cur[j] = max(prev[j - input4[i]] + input3[i], prev[j]);
        }
        prev = cur;
    }

    return prev[input2];
}

int main() {
    int arr[3] = {2, 6, 9};
    int brr[3] = {3, 5, 3};

    cout<<sol(3, 7, arr, brr);
}

