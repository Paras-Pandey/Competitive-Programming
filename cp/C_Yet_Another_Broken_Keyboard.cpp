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
    
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    int arr[26] = {0};
    char x;
    FOR(i, n)
    {
        cin>>x;
        arr[x-'a']++;
    }

    llu sub = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[s[i]-'a']>=1)
        {
            int j;
            for(j = i; j<n; j++)
            {
                if(arr[s[j]-'a']==0)
                    break;
            }
            int l = j-i;
            i = j;
            sub += 1ll*l*(1ll*l+1)/2ll;
        }
    }

    cout<<sub<<endl;
    return 0;
}