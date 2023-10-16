#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n%3!=0 and n!=1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int count = 0;
            while(n!=1)
            {
                if(n%6==0)
                    n/=6, count++;
                else if(n%3==0)
                    n*=2, count++;
                else
                    break;
            }
            if(n==1)
                cout<<count<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}