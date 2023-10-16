#include"bits/stdc++.h"
using namespace std;

bool can(int m, int s)
{
    return s>=0 and s<=m*9;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, s;
    cin>>m>>s;

    int sum = s;
    string min="", max="";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<=9; j++)
        {
            if((i>0 || j>0 || (m==1 and j==0)) and can(m-i-1, s-j))
            {
                min+=(char)('0'+j);
                s-=j;
                break;
            }
        }
    }
    s = sum;
    for(int i=0; i<m; i++)
    {
        for(int j=9; j>=0; j--)
        {
            if((i>0 || j>0 || (m==1 and j==0)) and can(m-i-1, s-j))
            {
                max+=(char)('0'+j);
                s-=j;
                break;
            }
        }
    }
    if(min.length()==m and max.length()==m)
        cout<<min<<" "<<max;
    else
        cout<<-1<<" "<<-1;
    return 0;
}