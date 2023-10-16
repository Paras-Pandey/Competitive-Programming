#include"bits/stdc++.h"
using namespace std;

string findString(vector<vector<int>> lcp){
    int n = lcp.size();

    vector<int> str(n);
    iota(str.begin(), str.end(), 0);

    char c = 'a';

    vector<pair<int, int>> mp[n + 1];

    for(int i = n - 1; i >= 0; i--) {
        for(int j = n - 1; j >= 0; j--) {
            if(lcp[i][j] == 0) {
                continue;
            }
            if(lcp[i][j] > (n - i) || lcp[i][j] > (n - j))
                return "Impossible";
            mp[lcp[i][j]].push_back({i, j}); 
        }
    }

    for(int i = 1; i <= n; i++) {
        for(auto j: mp[i]) {
            int fs = j.first, ss = j.second;
            for(int k = 0; k < i; k++) {
                str[fs + k] = str[ss + k];
            }
        }
    }

    string ans;
    for(auto i: str) {
        char c = 'a' + i;
        ans.push_back(c);
    }

    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {4, 0, 2, 0},
        {0, 3, 0, 1},
        {2, 0, 2, 0}, 
        {0, 1, 0, 1}
    };

    cout<<findString(mat)<<endl;
}
