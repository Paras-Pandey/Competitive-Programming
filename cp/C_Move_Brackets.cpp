#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    while(n--)
    {
        int x;
        cin>>x;

        string s;
        cin>>s;
        int numo=0, numc=0, k=x-1, moves = 0;
        for(int i=0; i<x; i++)
        {
            if(s[i]=='(')
                numo++;
            else
                numc++;
            if(numo<numc)
            {
                numc--;
                moves++;
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}