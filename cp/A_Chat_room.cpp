#include"bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin>>s;
    string h = "hello";
    int j = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==h[j])
        {
            j++;
            if(j==5)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    if(j!=5)
    {
        cout<<"NO"<<endl;
    }
}