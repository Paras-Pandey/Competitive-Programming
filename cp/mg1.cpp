#include"bits/stdc++.h"
using namespace std;

vector<int> findDataLocations(vector<int> locations, vector<int> &moveFrom, vector<int> &moveTo) {
    int n = locations.size();

    set<int> ls;

    for(auto i: locations) {
        ls.insert(i);
    }

    int m = moveFrom.size();
    for(int i = 0; i < m; i++) {
        ls.erase(moveFrom[i]);
        ls.insert(moveTo[i]);
    }

    vector<int> ans;
    for(auto i: ls)
        ans.push_back(i);

    return ans;
}

int main() {
    vector<int> l = {1, 5, 2, 6};
    vector<int> mf = {1, 4, 5, 7};
    vector<int> mt = {4, 7, 1, 3};

    vector<int> ans = findDataLocations(l, mf, mt);
    for(auto i: ans)
        cout<<i<<" ";
    
}