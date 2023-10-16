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

        vector<int> arr(n);

        for(auto &i: arr) 
            cin>>i;

        long long oddsum = 0, evensum = 0;
        int oddmin = INT_MAX, evenmax = INT_MIN;
        for(int i=0; i<n; i++) {
            if(i%2) {
                evensum += abs(arr[i]);
                evenmax = max(evenmax, abs(arr[i]));
            }
            else {
                oddsum +=  abs(arr[i]);
                oddmin = min(oddmin, abs(arr[i]));
            }
        }
        if(evenmax>oddmin) {
            evensum-=evenmax, oddsum-=oddmin;
            evensum+=oddmin, oddsum+=evenmax;
        }
        cout<<oddsum-evensum<<endl;
    }
    return 0;
}