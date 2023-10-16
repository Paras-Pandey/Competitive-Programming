#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<3<<endl;
        else
        {
            string s = "1";
            for(int i=0; i<n-2; i++)
            {
                s+='0';
            }
            s+='5';
            cout<<s<<endl;
        }
    }
}