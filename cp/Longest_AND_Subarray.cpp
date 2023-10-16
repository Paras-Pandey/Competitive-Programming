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
        if(x==1)
        {
            cout<<1<<endl;
        }
        else 
        {
            power = 0;
            int temp = x;
            while(temp!=1)
            {
                power++;
                temp/=2;
            }
            int ans;
            if(x==pow(2, power))
            {
                ans = pow(2, power) - pow(2, power-1);
            }
            else
                ans = max(x-pow(2, power)+1, pow(2, power)-pow(2, power-1));
            cout<<ans<<endl;
        }
    }
    return 0;
}