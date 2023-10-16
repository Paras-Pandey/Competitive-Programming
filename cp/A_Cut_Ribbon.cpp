#include"bits/stdc++.h"
using namespace std;

int maxrib(int n, int a, int b, int c)
{
    vector<int> t(n+1);
    t[0] = 0;
    int x, y, z;
    for(int i=1; i<=n; i++)
    {
        x=-1, y=-1, z=-1;
        if(i>=a)
            x = t[i-a];
        if(i>=b)
            y = t[i-b];
        if(i>=c)
            z = t[i-c];
        if(x==-1 and y==-1 and z==-1)
            t[i] = -1;
        else
            t[i] = max(x, max(y, z)) + 1;
    }
    return t[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    int n;
    cin>>n>>a>>b>>c;
    cout<<maxrib(n, a, b, c);
}

