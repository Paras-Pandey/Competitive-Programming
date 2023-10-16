#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=0, j=k-1, tempheight=0, minheight, ans;
    for(int k=0; k<=j; k++)
    {
        tempheight += arr[k]; 
        minheight = tempheight;
        ans = i+1;
    }
    j++;
    while(j<n)
    {
        tempheight+=(-arr[i]+arr[j]);
        if(minheight>tempheight)
        {
            minheight = tempheight;
            ans = i+2;
        }
        i++, j++;
    }
    cout<<ans;
    return 0;
}