#include"bits/stdc++.h"
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int x, power;
    while(n--)
    {
        cin>>x;
        if(x==0)
        {
            cout<<1<<endl;
        }
        else if(x==1)
        {
            cout<<2<<endl;
        }
        else
        {
            power = 0;
            int temp = x;
            while(x!=1)
            {
                power++;
                x= x/2;
            }
            int ans = pow(2, power);
            if(ans+ans-1==temp)
            {
                ans*=2;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
