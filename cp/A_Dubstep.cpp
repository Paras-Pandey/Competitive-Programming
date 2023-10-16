#include"bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin>>s;

    string ans="";
    for(int i=0; i<s.length(); i++)
    {
        if(s.substr(i, 3)=="WUB")
        {
            i+=3;
            while(s.substr(i, 3)=="WUB")
            {
                i+=3;
            }
            i-=1;
            ans+=" ";
        }
        else
        {
            ans+=s[i];
        }
    }
    cout<<ans;
}