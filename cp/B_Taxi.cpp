#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[5];
    memset(arr, 0, sizeof(arr));
    int x;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr[x]++;
    }
    ans += arr[4];

    if(arr[3]>=arr[1])
    {
        ans += arr[3];
        arr[1] = 0;
    }
    else
    {
        ans += arr[3]; 
        arr[1] = arr[1] - arr[3];
    }
    arr[1] = (arr[1]+2*arr[2])/4 + ((arr[1]+arr[2]*2)%4!=0);

    ans += arr[1];
    cout<<ans;
}