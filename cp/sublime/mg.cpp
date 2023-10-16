#include"bits/stdc++.h"
using namespace std;

int main() {
    string m;
    string n;

    cin>>m>>n;

    int minv = 0, maxv = 0;

    for(int i = 0; i < m.size(); i++) {
        if(m[i] != '?' && n[i] != '?' && m[i] != n[i])
            maxv++, minv++;
        else if(m[i] == '?' && n[i] == '?')
            maxv++;
        else if(m[i] != n[i])
            maxv++; 
    }

    cout<<minv<<" "<<maxv<<endl;
}