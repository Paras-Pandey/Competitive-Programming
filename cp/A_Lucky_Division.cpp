#include"bits/stdc++.h"
using namespace std;

bool solve(int n, int k)
{
    if(k>n)
    {
        return false;
    }
    if(n%k==0)
    {
        return true;
    }
    return (solve(n, k*10+4) || solve(n, k*10+7));
}
int main()
{
    int n;
    cin>>n;

    if(solve(n, 4) || solve(n, 7))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}