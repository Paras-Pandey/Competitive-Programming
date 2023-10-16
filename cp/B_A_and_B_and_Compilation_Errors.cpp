#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int sum=0, sum1=0, sum2=0, x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        sum1+=x;
    }
    for(int i=0; i<n-2; i++)
    {
        cin>>x;
        sum2+=x;
    }
    cout<<sum-sum1<<"\n"<<sum1-sum2;
    return 0;
}