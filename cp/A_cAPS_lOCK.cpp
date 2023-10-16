#include"bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length()==1)
    {
        if(s[0]>=97)
        {
            s[0] = toupper(s[0]);
            cout<<s[0];
        }
        else
        {
            s[0] = tolower(s[0]);
            cout<<s[0];
        }
    }
    else
    {
        bool flag = 0;
        for(int i=1; i<s.length(); i++)
        {
            if((int)s[i]>=97)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout<<s;
        }
        else 
        {
            if(s[0]>=97)
                s[0] = toupper(s[0]);
            else 
                s[0] = tolower(s[0]);
            for(int i=1; i<s.length(); i++)
            {
                s[i] = tolower(s[i]);
            }
            cout<<s;
        }
    }
}