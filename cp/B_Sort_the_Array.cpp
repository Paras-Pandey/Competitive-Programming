#include"bits/stdc++.h"
using namespace std;

#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
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

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }   
    bool flag = true;
    int count = 0;
    vector<int> ans = {};
    if(flag)
    {
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]-arr[i-1]==arr[i+1]-arr[i])
            {
                continue;
            }
            else
            {
                count++;
                ans.push_back(i+2);
            }
        }
        if(count>2)
        {
            cout<<"no";
            flag = false;
        }
        else
        {
            if(ans.size()==1)
            {
                cout<<"yes"<<ans[0]<<" "<<n<<endl;
            }
            else
            {
                cout<<"yes"<<ans[0]<<" "<<ans[1]<<endl;
            }
        }
    }
    return 0;
}