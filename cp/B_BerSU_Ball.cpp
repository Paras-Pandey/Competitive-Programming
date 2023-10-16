#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int boys[n];
    for(int i=0; i<n; i++)
    {
        cin>>boys[i];
    }

    int m;
    cin>>m;

    int girls[m];
    for(int i=0; i<m; i++)
    {
        cin>>girls[i];
    }

    sort(boys, boys+n);
    sort(girls, girls+m);

    int i=0, j=0, pairs=0;
    while(i<n and j<m)
    {
        if(abs(boys[i]-girls[j])<=1)
            i++, j++, pairs++;
        else if(boys[i]>girls[j])
            j++;
        else
            i++;
    }
    cout<<pairs;
    return 0;
}