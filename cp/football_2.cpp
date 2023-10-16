#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string, int> mp;
    string x;

    int n;
    cin>>n;

    while(n--)
    {
        cin>>x;
        mp[x]++;
    }
    map<string, int> :: iterator it;
    int freq = 0;
    string s;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>freq)
        {
            freq = it->second;
            s = it->first;
        }
    }
    cout<<s;
    return 0;
}