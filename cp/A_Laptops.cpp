#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int pr[n], qua[n];
    vector<pair<int, int>> pairs = {};

    for(int i=0; i<n; i++)
    {
        cin>>pr[i]>>qua[i];
    }
    for(int i=0; i<n; i++)
    {
        pairs.push_back(make_pair(pr[i], qua[i]));
    }
    sort(pr, pr+n);
    sort(qua, qua+n);
    sort(pairs.begin(), pairs.end());
    int i;
    for(i=0; i<n; i++)
    {
        if(qua[i]!=pairs[i].second)
        {
            cout<<"Happy Alex";
            break;
        }
    }
    if(i==n)
        cout<<"Poor Alex";
    return 0;
}