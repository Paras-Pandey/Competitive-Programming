#include<bits/stdc++.h>
using namespace std;


int letter(string input1) {
    int ans = 0;
    int val[26] = {0};
    val[0] = 0;
    val[1] = 1;
    for(int i = 2; i < 26; i++) {
        val[i] = val[i - 1] + val[i - 2];
    }

    int n = input1.size();
    for(int i = 0; i < n; i++) {
        ans += val[input1[i] - 'A'];
    }

    return ans;
}

int main() {
    string s = "MORE";
    cout<<letter(s);
}