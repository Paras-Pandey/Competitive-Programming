#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin>>a;

    if(a>=0)
    {
        cout<<a;
    }
    else
    {
        if(a>-10)
        {
            cout<<0;
        }
        else
        {
            a = a*(-1);
            string s = to_string(a);
            if(s[s.length()-1]>=s[s.length()-2])
            {
                s = s.substr(0, s.length()-1);
                if(s!="0")
                {   
                    s='-'+s;
                    cout<<s;
                }
                else
                    cout<<s;
            }
            else
            {
                char ans = s[s.length()-1];
                s = s.substr(0, s.length()-2);
                s+=ans;
                if(s!="0")
                {   
                    s='-'+s;
                    cout<<s;
                }
                else 
                    cout<<s;
            }
        }
    }
    return 0;
}