#include"bits/stdc++.h"
using namespace std;

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
        int n, i, even=0, odd=0;
        cin>>n;

        int arr[n];
        arrayloop
        {
            cin>>arr[i];
            if(arr[i]%2==0)
                even++;
            else 
                odd++;
        }

        sort(arr, arr+n);
        int te = even, to = odd, pair = 0;
        if(even%2==0 and odd%2==0)
            cout<<"YES"<<endl;
        else if(even%2!=0 and odd%2!=0)
        {
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]+1==arr[i+1]) 
                    i++, te--, to--, pair++;
            }
            if(pair>0)
                cout<<"YES"<<endl;
            else
            {
                pair = 0, te =even , to = odd;
                for(int i=1; i<n-1; i++)
                {
                    if(arr[i]+1==arr[i+1])
                        i++, te--, to--, pair++;
                }
                if(pair>0)
                    cout<<"YES"<<endl;
                else 
                    cout<<"NO"<<endl;
            }
        }
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}