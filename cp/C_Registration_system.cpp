#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<string, int> mp;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            mp[s]++;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s+to_string(mp[s])<<endl;
            mp[s]++;
        }
    }
}