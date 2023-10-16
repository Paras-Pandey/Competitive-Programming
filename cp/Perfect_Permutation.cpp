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
        int n, k;
        cin>>n>>k;

        vector<int> ans(n);
        for(int i=0; i<n; i++)
            ans[i] = i+1;
        if(n==k) {
            for(int i=0; i<n; i++)
                cout<<ans[i]<<" ";
            cout<<endl;
            continue;
        }
        if(n-k==1) {
            swap(ans[0], ans[n-1]);
            for(int i=0; i<n; i++)
                cout<<ans[i]<<" ";
            cout<<endl;
            continue;
        }
        else {
            // if((n-k)%2==0) {
            //     for(int i=k; i<n; i+=2) {
            //         swap(ans[i], ans[i+1]);
            //     }
            //     for(int i=0; i<n; i++)
            //         cout<<ans[i]<<" ";
            //     cout<<endl;
            // }
            // else {
            //     int start = k+(k%2==1);
            //     for(int i=start; i<n; i+=4) {
            //         if(i+2<n)
            //             swap(ans[i], ans[i+2]);
            //     }
            //     start = k + (k%2==0);
            //     for(int i=start; i<n; i+=2) {
            //         swap(ans[i], ans[i+1]);
            //     }
            //     for(int i=0; i<n; i++)
            //         cout<<ans[i]<<" ";
            //     cout<<endl;
            // }

            swap(ans[k], ans[k+1]);
            for(int i = k+1; i<n-1; i++) {
                swap(ans[i], ans[i+1]);
            }
            for(int i=0; i<n; i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}