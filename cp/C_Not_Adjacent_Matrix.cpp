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

        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<-1<<endl;
        else 
        {
            int arr[n][n];
            int k = 1, m = n+1;
            for(int i=n-2; i>=1; i--)
            {
                int j = 0, l = i;
                while(l+j<m)
                {
                    arr[l][j] = k;
                    k++, l++, j++;
                }
                m++;
            }

            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    if(i==j)    arr[i][j] = k++;
            
            m = n+1;
            for(int i=n-2; i>=1; i--)
            {
                int j = 0, l = i;
                while(l+j<m)
                {
                    arr[j][l] = k;
                    k++, l++, j++;
                }
                m++;
            }
            arr[n-1][0] = k;
            k++;
            arr[0][n-1] = k;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }    
                
        }

    }
    return 0;
}