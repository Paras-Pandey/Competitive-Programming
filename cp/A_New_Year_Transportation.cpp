#include"bits/stdc++.h"
using namespace std;

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;
    cin>>n>>t;

    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    int port[n+1];
    int i;
    for(i=1; i<n; i++)
    {
        port[i] = i+arr[i];
        if(port[i]==t)
        {
            cout<<"YES";
            break;
        }
        i = port[i]-1;
    }
    if(i==n)
        cout<<"NO";
    return 0;
}