#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int arr[n], sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int orarr[n];
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            orarr[i] = 1;
        else
            orarr[i] = -1;
    }
    int cumsum = 0, maxsum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cumsum += orarr[i];
        maxsum = max(cumsum, maxsum);
        if(cumsum<0)
            cumsum = 0;
    }
    cout<<sum+maxsum;
    return 0;
}