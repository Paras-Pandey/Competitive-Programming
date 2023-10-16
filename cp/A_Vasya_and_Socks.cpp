#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    int days = 0, i=0;
    while(1)
    {
        if(n==0)
        {
            break;
        }
        days++;
        n--;
        i++;
        if(i==m)
            n++, i=0;
    }
    cout<<days;
    return 0;
}