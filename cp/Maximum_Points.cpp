#include"bits/stdc++.h"
using namespace std;

int maxpoints(vector<pair<int, int>> points)
{
    int dp[241][21];
    memset(dp, -1, sizeof(dp));
    int minmin = INT_MAX;

    for(int i=0; i<3; i++)
    {
        minmin = min(points[i].first, minmin);
    }
    dp[0][0] = 0;
    for(int i=0; i<minmin; i++)
    {
        dp[i][1] = 0;
    }
    for(int i=minmin; i<241; i++)
    {
        for(int j=1; j<21; j++)
        {
            
        }
    }
}
int main()
{
    int t, a, b, c, x, y, z;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>c>>x>>y>>z;
        vector<pair<int, int>> points;
        points.push_back(make_pair(a, x));
        points.push_back(make_pair(b, y));
        points.push_back(make_pair(c, z));

        // sort(points.begin(), points.end());
        // int time = 240;
        // int maxpoints = 0;

        // if(points[2].first!=points[1].first)
        // {
        //     maxpoints += points[2].second*20*points[1].first;
        //     time -= points[2].second*20;
        //     if(points[1].first!=points[2].)
        // }

    }
}