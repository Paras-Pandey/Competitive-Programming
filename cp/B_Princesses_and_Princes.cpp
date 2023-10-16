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

    whilecase {
        int n;
        cin>>n;

        vector<int> princess(n, 0), princes(n, 0);
        int *brr = new int[n];
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;

            for(int j = 0; j<a; j++)   
            {
                cin>>brr[j];
            }
            for(int j = 0; j<a; j++)
            {
                if(princes[brr[j]-1]==0)
                {
                    princes[brr[j]-1] = 1;
                    princess[i] = 1;
                    break;
                }
            }
        }
        int i, j;
        for(i=0; i<n; i++)
        {
            if(princess[i]==0){
                for(j=0; j<n; j++) {
                    if(princes[j]==0) {
                        cout<<"IMPROVE"<<endl<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
                if(j<n)
                    break;
            }
        }
        if(i==n)    cout<<"OPTIMAL"<<endl;
    }
    return 0;
}