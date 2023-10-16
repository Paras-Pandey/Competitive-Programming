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

    while(n--)
    {
        int x;
        cin>>x;

        lld int arr[x];
        for(int i=0; i<x; i++)
        {
            cin>>arr[i];
        }

        lld int maxno = INT_MIN, sum=0;
        for(int i=0; i<x; i++)
        {
            if(arr[i]<0)
            {
                while(arr[i]<0 and i<x)
                {
                    maxno = max(maxno, arr[i]);
                    i++;
                }
                sum+=maxno;
                maxno = INT_MIN;
                i--;
            }
            else
            {
                while(arr[i]>0 and i<x)
                {
                    maxno = max(maxno, arr[i]);
                    i++;
                }
                sum+=maxno;
                maxno = INT_MIN;
                i--;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}