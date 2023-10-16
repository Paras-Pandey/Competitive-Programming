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
        int n, k;
        cin>>n>>k;

        int arr[n];
        FOR(i, n)   cin>>arr[i];
        set<int> s;
        FOR(i, n)   s.insert(arr[i]);
        if(s.size()<=k)
        {
            int count[101] = {0}, maxf = INT_MIN;
            // set<int> opt;
            // FOR(i, 101)    opt.insert(i);
            // opt.erase(0);
            // FOR(i, n)   
            // {
            //     count[arr[i]]++;
            //     opt.erase(arr[i]);
            //     maxf = max(maxf, count[arr[i]]);
            // }
            vector<int> seq;
            for(auto i:s)
                seq.pb(i);
            int toins = k-seq.size();
            for(int i=0; i<toins; i++)
            {
                seq.pb(1);
            }
            int size = n;
            cout<<k*size<<endl;
            for(int i=0; i<size; i++)
            {
                for(auto j:seq)
                    cout<<j<<" ";
            }
            cout<<endl;
        } 
        else
            cout<<-1<<endl;
    }
    return 0;
}