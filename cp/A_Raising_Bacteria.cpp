#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int ans = 0;
    if(n%2)
        ans++, n--;
    while(n!=0)
    {
        if(n%2)
            ans++, n--;
        else
            n/=2;
    }
    cout<<ans<<endl;
    return 0;
}