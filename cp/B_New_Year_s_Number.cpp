#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    while(n--)
    {
        int t;
        cin>>t;

        if(t%2020==0)
            cout<<"YES"<<endl;
        else if((t/2020)>=t%2020)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}