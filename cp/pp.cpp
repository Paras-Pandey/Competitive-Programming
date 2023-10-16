#include <bits/stdc++.h>
using namespace std;

struct Result
{
    int output1;
    string output2;
};

struct Result sol(string input1)
{
    int cmax = 0, n = input1.size();
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n - 1 and input1[j] == input1[j + 1]) {
            j++;
        }
        int curl = j - i + 1;
        if (curl >= cmax) {
            cmax = curl;
            ans = input1.substr(i, curl);
        }
        i = j;
    }

    Result res;
    res.output1 = cmax;
    res.output2 = ans;

    return res;
}

int main()
{
    struct Result res = sol("abbddd");
    cout << res.output1 << " " << res.output2 << endl;
}