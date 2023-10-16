#include"bits/stdc++.h"
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int cnt = 0;
    for(auto i: s) {
        if(!(i >= 'a' and i <= 'z') and !(i >= 'A' and i <= 'Z') and !(i >= '0' and i <= '9') and i != ' ')
            cnt++;
    }

    cout<<cnt<<endl;
}