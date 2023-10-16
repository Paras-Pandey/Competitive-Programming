#include"bits/stdc++.h"
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
 
    vector<int> arr(m);

    for(int i = 0; i < m; i++) {
        cin>>arr[i];
    }

    if(n <= m / 2) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m - i - 1; j++) {
                if(arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }

        cout<<arr[m - n];
    }
    else {
        n = m - n; 
        for(int i = 0; i <= n; i++) {
            int mini = i;
            for(int j = i; j < m; j++) {
                if(arr[j] < arr[mini])
                    mini = j;
            }
            swap(arr[i], arr[mini]);
        }

        cout<<arr[n];
    }
}