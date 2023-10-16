#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n<10)
        {
            cout<<n;
        }
        else
        {
            int ans = (n-9)*2 + 9;
            cout<<ans<<endl;
        }
    }
}