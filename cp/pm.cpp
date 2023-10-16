#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    if(m == 1) {
        cout<<(n - 2) * (n - 2) * 6;
    }
    else if(m == 2) {
        cout<<(n - 1) * 8;
    }
    else
        cout<<8<<endl;
}