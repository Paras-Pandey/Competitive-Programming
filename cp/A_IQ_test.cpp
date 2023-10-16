#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int counte = 0, counto = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        {
            counto++;
        }
        else
        {
            counte++;
        }
    }
    if(counte>counto)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
}