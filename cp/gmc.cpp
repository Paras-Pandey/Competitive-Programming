#include <bits/stdc++.h>
using namespace std;
 
int find_max_elements(vector<int> arr)
{
    int targetSum = arr[0];
    int m = arr.size();
    sort(arr.begin() + 1, arr.end());
    vector<int> dp(targetSum + 1, -1);

    dp[0] = 0;
    for (int i = 1; i < m; i++) {
        int num = arr[i];
        for (int j = targetSum; j >= num; j--) {
            if (dp[j - num] >= 0) {
                dp[j] = max(dp[j], 1 + dp[j - num]);
            }
        } 
    }
 
    int max_elements = dp[targetSum] < 0 ? 0 : dp[targetSum];

    return max_elements;
}
 
int main()
{
 
    // Given array
    vector<int> arr = { 10, 2, 2, 2, 2, 2 };
    int m = arr.size();
 
    // Given sum V
    int V = 30;
 
    // Function call
    cout << (find_max_elements(arr));
 
    return 0;
}

