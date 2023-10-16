#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int temp = m;
    if(float(b)/m<(float)a)
    {
        int cost = 0;
        while(m<=n)
        {
            m += temp;
            cost+=b;
        }
        if(m==n)
        {
            cout<<cost;
        }
        else
        {
            m-=temp;
            cost+=min(b, (n-m)*a);
            cout<<cost;
        }
    }
    else
    {
        cout<<a*n;
    }
    return 0;
}