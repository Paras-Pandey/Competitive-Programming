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

int gcd(int x, int y)
{
    if(y==0)
        return x;
    else
        return gcd(y, x%y);
}


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

        int *arr = new int[n];
        int *sortarr = new int[n];
        FOR(i, n)   cin>>arr[i], sortarr[i]=arr[i];

        sort(sortarr, sortarr+n);
        int minele = *min_element(arr, arr+n);
        if(n==1)
            cout<<"YES"<<endl;
        else
        {
            bool pos = true;
            FOR(i, n)
            {
                if(arr[i]==sortarr[i])
                    continue;
                else
                {
                    if(sortarr[i]%minele!=0)
                    {   
                        pos = false;
                        break;
                    }
                }
            }
            if(pos)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}