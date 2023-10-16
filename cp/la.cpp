#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int,int>  mp;

    mp[1] = 1;
    mp[2] = 2;

    for(auto &[i, j] : mp)
        cout<<i<<" "<<j<<endl;
} 

