#include"bits/stdc++.h"
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int x, d;
    while(n--)
    {
        cin>>x>>d;
        string s = to_string(x);
        char sd = 48+d;
        int pos=-1;
        if(s.length()==1 and x==d)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=s.length()-1; i>=0; i--)
            {
                if(s[i]==sd)
                {
                    if(sd!='9')
                    {
                        pos = i;
                        s[pos]++;
                    }
                    else
                    {
                        pos = i;
                        s[pos] = '0';
                    }
                }
            }
            if(pos==-1)
                cout<<0<<endl;
            else
            {
                if(sd!='0')
                {
                    if(sd=='9')
                    {
                        if(pos==0)
                        {
                            s = '1'+s;
                        }
                        else
                        {
                            s[--pos]++;
                        }
                    }
                    for(int i=pos+1; i<s.length(); i++)
                    {
                        s[i] = '0';
                    }
                }
                else
                {
                    for(int i=pos+1; i<s.length(); i++)
                    {
                        s[i] = '1';
                    }
                }
                int ans = stoi(s)-x;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}