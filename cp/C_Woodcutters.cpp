#include"bits/stdc++.h"
using namespace std;

#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define whilecase           while (tc--)
#define FOR(i, n)           for (int i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
typedef unsigned long long  llu;
typedef long long           lld;
typedef unsigned int        U;
#define endl                "\n"
const int MOD = 1000000007;
const int MAX = 1000005;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int solve(pair<int, int> *arr, unordered_map<int, int> &mp, int n)
{
    int count_tree = 0;
    mp[arr[0].first] = -1;
    count_tree++;
    for(int i=1; i<n-1; i++)
    {
        if(mp[arr[i-1].first]==-1)
        {
            if(arr[i].first-arr[i].second<=arr[i-1].first)
            { 
                if(arr[i].first+arr[i].second>=arr[i+1].first)
                    mp[arr[i].first] = 0;
                else
                    mp[arr[i].first] = 1, count_tree++;
            }
            else
            {
                mp[arr[i].first] = -1, count_tree++;
            }
        }
        else if(mp[arr[i-1].first]==1)
        {
            if(arr[i].first-arr[i].second<=arr[i-1].first+arr[i-1].second)
            { 
                if(arr[i].first+arr[i].second>=arr[i+1].first)
                    mp[arr[i].first] = 0;
                else
                    mp[arr[i].first] = 1, count_tree++;
            }
            else
            {
                mp[arr[i].first] = -1, count_tree++;
            }
        }
        else
        {
            if(arr[i].first-arr[i].second<=arr[i-1].first)
            { 
                if(arr[i].first+arr[i].second>=arr[i+1].first)
                    mp[arr[i].first] = 0;
                else
                    mp[arr[i].first] = 1, count_tree++;
            }
            else
            {
                mp[arr[i].first] = -1, count_tree++;
            }
        }
    }
    if(n>2)
        count_tree++;
    return count_tree;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    pair<int, int> *arr = new pair<int, int>[n];
    unordered_map<int, int> mp;
    FOR(i, n)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    cout<<solve(arr, mp, n);
    return 0;
}