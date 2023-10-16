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

void sol()
{
    int n;
    cin>>n;

    cin.ignore();
    string s;
    getline(cin, s);

    if(n%2)
    {
        cout<<"NO"<<endl;
        return;
    }

    vector<int> arr(26, 0);
    for(int i=0; i<n; i++)
    {
        arr[s[i]-'a']++;
    }

    int maxf = *max_element(arr.begin(), arr.end());
    if(maxf>n/2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        int ct = 0;
        string ans = "";
        for(int i=0; i<26; i++)
        {
            if(arr[i]>0)
            {
                while(arr[i]--)
                {
                    char y = 'a'+i;
                    ans.push_back(y);
                    ct++;
                    if(arr[i]>0 and ct==n/2)
                        break;
                }
            }
        }
        for(int i=0; i<26; i++)
        {
            
            char y = 'a'+i;
            if(arr[i]>0)
            {while(arr[i]--)
            {
                ans += y;
            }}
        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase
    {
        sol();
    }
    return 0;
}