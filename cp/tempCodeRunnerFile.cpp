#include"bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, m;
        cin>>n>>m;

        int l1 = -1, l2 = -1, nl1 = 0, nl2 = 0;

        unordered_map<int, int> pathtoroot;
        
        while(n) {
            pathtoroot[n] = nl1;
            n /= 2;
            nl1++;
        }

        while(m) {
            if(pathtoroot.find(m) != pathtoroot.end()) {
                nl2 += pathtoroot[m] + 1;
                break;
            }
            m /= 2;
            nl2++;
        }

        cout<<nl2<<endl;
    }
}