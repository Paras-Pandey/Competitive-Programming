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
        int arr[9][9];
        string s;
        for(int i=0; i<9; i++)
        {
            cin>>s;
            for(int j=0; j<9; j++)
            {
                arr[i][j] = s[j] - '0';
            }
        }
        int num = 10, i=0;
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if(arr[i][j+3*k]!=5)
                    arr[i][j+3*k] = num-arr[i][j+3*k];
                else
                    arr[i][j+3*k] = 4;
                i++;
            }
        }
        FOR(i, 9)
        {
            FOR(j, 9)
                cout<<arr[i][j];
            cout<<endl;
        }
    }
    return 0;
}