#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int arr[100001], x;
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr[x]++;
    }

    for(int i=1; i<100001; i++)
    {
        arr[i] += arr[i-1];
    }
    int q;
    cin>>q;
    int k, j, mid;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        if(x<100000)
            cout<<arr[x]<<endl;
        else
            cout<<arr[100000]<<endl;
    }
    return 0;
}