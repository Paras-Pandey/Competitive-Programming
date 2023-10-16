#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin>>a>>b;

    int hours = 0;
    while(a>0)
    {
        hours++;
        a--;
        if(hours%b==0)
            a++;
    }
    cout<<hours;
    return 0;
}