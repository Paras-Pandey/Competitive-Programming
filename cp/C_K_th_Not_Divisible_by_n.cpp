#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int no = n/k-1;
        if(k%(n-1)==0)
            cout<<n*(k/(n-1))-1<<endl;
        else
        {
            int ans = n*(k/(n-1))+(k%(n-1));
            cout<<ans<<endl;
        }
    }
    return 0;
}