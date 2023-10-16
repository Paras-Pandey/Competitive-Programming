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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> arr[10];
    arr[0] = {0, 0, 0, 0};
    arr[1] = {0, 0, 0, 0};
    arr[2] = {0, 0, 0, 1};
    arr[3] = {0, 0, 1, 0};
    arr[4] = {0, 0, 1, 2};
    arr[5] = {0, 1, 0, 0};
    arr[6] = {0, 1, 1, 0};
    arr[7] = {1, 0, 0, 0};
    arr[8] = {1, 0, 0, 3};
    arr[9] = {1, 0, 2, 1};

    unordered_map<int, char> mp;
    mp[0] = '7';
    mp[1] = '5';
    mp[2] = '3';
    mp[3] = '2';
    int i = 0;
    int ans[] ={0, 0, 0, 0, 0, 0};
    while(s[i]=='0') i++;

    while(i<n)
    {
        for(int j=0; j<4; j++)
        {
            ans[j] += arr[s[i]-'0'][j];
        }
        i++;
    }

    for(int i=0; i<4; i++)
    {
        while(ans[i]--)
            cout<<mp[i];
    }
    return 0;
}