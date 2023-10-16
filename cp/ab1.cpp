#include"bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<string> arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    vector<int> narr;
    for(int i = 0; i < n; i++) {
        int largest = *max_element(arr[i].begin(), arr[i].end()) - '0';
        int smallest = *min_element(arr[i].begin(), arr[i].end()) - '0';

        int curno = largest * 11 + smallest * 7;
        curno = curno % 100;

        narr.push_back(curno);
    }

    unordered_map<int, int> efreq, ofreq;
    int freq[10] = {0};

    for(int i = 0; i < n; i+=2) {
        if(i < n) {
            if(narr[i] >= 10)
                efreq[narr[i] / 10]++;
            else
                efreq[narr[i]]++;
        }
        if(i + 1 < n) {
            if(narr[i + 1] >= 10)
                ofreq[narr[i + 1] / 10]++;
            else
                ofreq[narr[i + 1]]++;
        }
    }

    int ans = 0;
    for(auto i: efreq) {
        if(i.second >= 2) {
            int maxp = (i.second > 2) ? 2 : 1;
            ans += maxp;
            freq[i.first] += maxp;
        }
    }

    for(auto i: ofreq) {
        if(freq[i.first] == 2 || i.second == 1)
            continue;
        else {
            int maxp = (i.second > 2 and freq[i.first] == 0) ? 2 : 1;
            ans += maxp;
        } 
    }

    cout<<ans<<endl;
}