#include<bits/stdc++.h>

int main() {
    string s;
    cin>>s;

    int n = s.size() - 1;

    int first_digit = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] < '0' || s[i] > '9') {
            first_digit = i;
            break;
        }
    }
    first_digit++;

    int s_len = first_digit;
    
    bool find = 0;
    int num = 0, pw = 1;
    int i = n - 1, res;
    while (i >= 0 && find == 0) {
        if (s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';
 
            num = num + (pw * digit);
 
            if (num >= s_len) {
                res = -1;
                find = 1;
                break;
            }

            pw = pw * 10;
        }
        i--;
    }
 
    num = num * 10;
 
    int req = s_len - num;

    if(find == 0) {
        if (req > 9 || req < 0)
            res = -1;
        res = req;
    }

    cout<<res<<endl;
}