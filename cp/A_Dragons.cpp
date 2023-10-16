#include"bits/stdc++.h"
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;

    vector<pair<int, int>> drag(n);
    for(int i=0; i<n; i++)
    {
        cin>>drag[i].first>>drag[i].second;
    }
    sort(drag.begin(), drag.end());
    bool flag = 1;
    for(int i=0; i<n; i++)
    {
        if(drag[i].first>=s)
        {
            flag = 0;
            break;
        }
        else
        {
            s += drag[i].second;
        }
    }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}