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
        for(auto &i : arr)  cin>>i;

        sort(arr.begin(), arr.end());

        int sub = 0, k = 0;
        for(int i=n-1; i>=0; i--)  {
            if(arr[i]>0) {
                int temp  = arr[i] & (arr[i]+1);
                if(temp == 0) {
                    sub = arr[i];
                    k = i;
                    for(int j = i-1; j>=0; j--) {
                        arr[j] = 0;
                    }
                    break;
                }
            }
        } 

        for(int j=n-2; j>=k; j--) {
            arr[j] = (arr[j]|arr[j+1])^arr[j+1];
        }  
        for(auto i: arr)
            cout<<i<<" ";
        int sum = 0;
        for(auto i: arr)
            sum += i;
        cout<<sum<<endl;
    }
    return 0;
}