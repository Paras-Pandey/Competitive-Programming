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
        int a, b, c;
        cin>>a>>b>>c;

        int i = 0;
        string dif = "";
        while(i<a)
        {
            dif+=char(97+(i%c));
            i++;
        }
        cout<<dif<<endl;
    }
    return 0;
}