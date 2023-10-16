#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    string ans = "";
    if(m!=10)
    {
        while(n--)
        {
            ans+=to_string(m);
        }
        cout<<ans;
    }
    else
    {
        if(n==1)
        {
            cout<<-1;
        }
        else
        {
            ans+='1';
            n--;
            while(n--)
                ans+=to_string(0);
            cout<<ans;
        }
    }
}