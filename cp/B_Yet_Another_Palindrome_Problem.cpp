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
    
    int tc;
    cin>>tc;

    whilecase
    {
        int n;
        cin>>n;

        int arr[n];
        FOR(i, n)
        {
            cin>>arr[i];
        }
        if(n<=2)
            cout<<"NO"<<endl;
        else
        {
            int count = 1, flag = 0;
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]==arr[i+1])
                    count++;
                else
                    count = 1;
                if(count==3)
                {
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
                if(arr[i] == arr[i+2] and i<n-2)
                {
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
            }
            int countarr[5001] = {0};
            if(flag == 0)
            {
                for(int i=0; i<n; i++)
                {
                    countarr[arr[i]]++;
                    if(countarr[arr[i]]>=2 and arr[i]!=arr[i-1])
                    {
                        cout<<"YES"<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}