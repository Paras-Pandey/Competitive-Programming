#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n], y[n], z[n]; 

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=x[i];
    }
    if(sum==0)
    {
        for(int i=0; i<n; i++)
        {
            sum+=y[i];
        }
    }
    if(sum==0)
    {
        for(int i=0; i<n; i++)
        {
            sum+=z[i];
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}