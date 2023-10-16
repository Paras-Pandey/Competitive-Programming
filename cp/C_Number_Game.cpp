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

bool cp(int n)
{
    // for(int i = 2; i < min(50000, n); i++)
	// 	if(n % i == 0)
	// 		return 0;
	// return 1;
    for(int i = 2; i*i<=n; i++)
        if(n%i==0)  return false;
    return true;
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

        bool w = (n==1);
        if(n>2 and n%2==0)
        {
            if((n & (n-1))==0)
                w = 1;
            else if(n%4!=0 and cp(n/2))
                w = 1;
        }
        if(!w)   cout<<"Ashishgup"<<endl;
        else    cout<<"FastestFinger"<<endl;
    }
    return 0;
}