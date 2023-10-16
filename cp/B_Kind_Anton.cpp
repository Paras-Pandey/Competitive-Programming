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

        int *arr1 = new int[n];
        int *arr2 = new int[n];
        int *res = new int[n];
        FOR(i, n)   cin>>arr1[i];
        FOR(i, n)   cin>>arr2[i];

        FOR(i, n)   res[i] = arr2[i]-arr1[i];

        bool poseq = 0, mineq = 0;
        int i = 0;
        while(arr1[i]==arr2[i])
        {
            if(arr1[i]==1)
                poseq = 1;
            else if(arr1[i]==-1)
                mineq = 1;
            i++;
        }

        for(i = 0; i<n; i++)
        {
            if((res[i]>0 and !poseq) or (res[i]<0 and !mineq))
                break;
            else if(res[i]>0 and arr1[i]<0)
                mineq = 1;
            else if(res[i]<0 and arr1[i]>0)
                poseq = 1;
        }
        if(i!=n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        delete arr1, arr2, res;
    }
    return 0;
}