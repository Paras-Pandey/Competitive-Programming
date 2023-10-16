#include"bits/stdc++.h"
using namespace std;

int sol(vector<int> &larger, vector<int> &maxpos, int req, int i) {
    if(i == larger.size() and req > 0)
        return 0;
    if(req == 0) {
        return (26 * (larger.size() - i)) > 0 ? (larger.size() - i) * 26 : 1;
    }

    int take = 0, nottake = 0;
    if(larger[i] <= req)
        take = sol(larger, maxpos, req - larger[i], i + 1) * maxpos[i];
    nottake = sol(larger, maxpos, req, i + 1) * 26;

    return nottake + take;
}

int solve(int A, int B, string C) {
    vector<int> larger(A, 0);

    for(int i = A - 1; i >= 0; i--) {
        larger[i] = A - i;
    }

    vector<int> maxpos(A, 0);
    for(int i = 0; i < A; i++) {
        maxpos[i] = 'z' - C[i];
    }

    return sol(larger, maxpos, B, 0);
}

int main() {
    cout<<solve(2, 3, "yx");
}