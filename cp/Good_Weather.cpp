#include"bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        int counts = 0;
        int countr = 0;
        for(int i=0; i<7; i++)
        {
            cin>>x;
            if(x==1)
                counts++;
            else 
                countr++;
        }
        if(counts>countr)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}