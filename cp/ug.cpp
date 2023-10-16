#include"bits/stdc++.h"
using namespace std;

long getMaximumPower(vector<int> power) {
    vector<int> p(1e5 + 1, 0);
    vector<int> r(1e5 + 1, 0);

    for(auto i: power) {
        p[i]++;
    }

    r[1] = p[1];
    for(int i = 2; i <= 1e5; i++)  {
        r[i] = max(r[i - 1], r[i - 2] + p[i] * i);
    }

    return r[1e5];
}

long getMaximumCouponValue(string coupon, int k) {
    long ans = 0;

    int f[27] = {0};
    for(int i = 0; i < k; i++) {
        f[coupon[i] - 'a' + 1]++;
    }

    long c = 0, m = 1e9 + 7;
    for(int i = 1; i <= 26; i++) {
        if(f[i])
            c = (c + (long)pow(i, f[i])) % m;
    }

    long a = c;

    for(int i = k; i < (int)coupon.size(); i++) {
        f[coupon[i - k] - 'a' + 1]--;
        f[coupon[i] - 'a' + 1]++;

        c = 0;
        for(int i = 1; i <= 26; i++) {
            if(f[i])
                c = (c + (long)pow(i, f[i])) % m;
        }

        a = max(a, c);
    }
    return a;
}

int main() {
    vector<int> power = {3, 3, 3, 4, 4, 1, 8};
    cout<<getMaximumPower(power);
    cout<<getMaximumCouponValue("bcaa", 3);
}