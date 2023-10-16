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
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(n>1)
        {
            int size0 = n/2+(n%2!=0), size1=n/2;
            lld ar0[size0], ar1[size1];
            int j=0;
            for(int i=0; i<n; i+=2)
            {
                ar0[j] = arr[i];
                j++;
            }
            j=0;
            for(int i=1; i<n; i+=2)
            {
                ar1[j] = arr[i];
                j++;
            }
            sort(ar0, ar0+size0, greater<int>());
            sort(ar1, ar1+size1);

            int i, ans = 0;

            for(i=0; i<size1; i++)
                cout<<ar0[i]<<" "<<ar1[i]<<" ";
            if(n%2)
                cout<<ar0[i]<<" ";
            cout<<endl;
            
            for(int i=1; i<size0; i++)
                ar0[i] += ar0[i-1];
            for(i=0; i<n/2; i++)
            {
                ans+=ar1[i]*ar0[i];
            }
            cout<<ans<<endl;
        }
        else   
        {
            cout<<arr[0]<<endl<<0<<endl;
        }
    }
    return 0;
}