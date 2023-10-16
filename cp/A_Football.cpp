#include"bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool flag = 0;
    int count = 0;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]=='1')
        {
            while(s[i]=='1')
            {
                count++;
                i++;
            }
            if(count>=7)
                flag = 1;
            i--;
            count = 0;
        }
        else if(s[i]=='0')
        {
            while(s[i]=='0')
            {
                count++;
                cout<<count;
                i++;
            }
            if(count>=7)
                flag = 1;
            i--;
            count = 0;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}