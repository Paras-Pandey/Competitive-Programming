#include"bits/stdc++.h"
using namespace std;

long long makeEverythingZero(long long X, long long Y, long long Z) {
    long long arr[3] = {X, Y, Z};

    sort(arr, arr + 3);

    if(arr[2] - arr[1] > arr[0])
        return -1;
    return arr[2] - arr[0] + arr[1];
}

int desiredArray(int *Arr, int N, int K) {
    vector<int> div(1000);

    for(int i = 0; i < N; i++) {
        if(div[Arr[i]] == 1)
            continue;
        for(int j = Arr[i]; j < 1000; j += Arr[i]) {
            div[j] = 1;
        }
    }

    int ans = 0, cnt = 0;
    for(int i = 1; i < 1000 && cnt < K; i++) {
        if(div[i] == 0) {
            cnt++;
            ans += i;
        } 
    }

    return ans;
}
int main(){
int input2[10] = {61,89, 10, 95, 16, 53, 96, 90, 99, 45};
long long ans = 0; 
int input1 = 10;

ans = desiredArray(input2, 10, 100);
cout<<ans;}