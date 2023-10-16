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

class Solution
{
    public:
    string sol(vector<int> &a, int n)
    {
        // int m = 1<<n;
        // for(int i=0; i<m; i++)
        // {
        //     int sum = 0;
        //     for(int j=0; j<=n; j++)
        //     {
        //         if((1<<j)&i)  sum+=rot[i];
        //         else    sum-=rot[i];

        //         if(sum%360==0)
        //             return "YES";
        //     }
        // }
        // return "NO";
        int s;
        for(int i=0;i<2<<15;i++){
		for(int j=s=0;j<15;j++)
            s+=i&(1<<j)?+a[j]:-a[j];
		if(s%360==0)return "YES";
	}
	return "NO";
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto &i:arr)   cin>>i;

    Solution s;
    cout<<s.sol(arr, n);
    return 0;
}