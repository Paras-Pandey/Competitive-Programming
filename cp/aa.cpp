#include"bits/stdc++.h"
using namespace std;


int main() {
    string s;  
    cin>>s;

    int op = 0, n = s.size();

    int ans = 0, curl = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(')
            op++;
        else {
            if(op) {
                op--;
                curl += 2;
            }
            else
                curl = 0;
        }
        ans = max(ans, curl);
    }

    cout<<ans<<endl;

    return 0;
}