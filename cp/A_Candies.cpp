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
        int c;
        cin>>c;

        int asu = 1, i=1;
        while(asu<c)
        {
            asu+=pow(2, i);
            if(float(c)/asu==float(c/asu))
            {
                cout<<c/asu<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}