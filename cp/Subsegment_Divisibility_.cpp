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


int prime(int *arr)
{
    int i = 0;
    int sol[5000] = {0};

    for(int i=2; i<5000; i++)
    {
        if(sol[i] == 0)
        {
            for(int j = i+i; j<5000; j+=i)
                sol[j] = 1;
        }
    }

    int j = 0;
    for(int i=3; i<5000 and j<250; i++)
    {
        if(sol[i]==0)
        {
            arr[j]=i;
            j++;
        }
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
        int n;
        cin >> n;
        int j = 2;
        int k = 3;
        for (int i = 0; i < n; i++)
        {
            cout << j << " ";
            if (i & 1)
            {
                j += 3;
            }
            else
            {
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}