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

bool checksorted(vector<int> & arr, vector<int> & sortedarr, int s, int e) {
    for(int i=s; i<=e; i++) {
        if(arr[i]!=sortedarr[i])
            return false;
    }

    return true;
}
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

        for(auto &i:arr)
            cin>>i;
        
        string s;
        cin>>s;

        bool sorted = true;
        for(int i=1; i<n; i++) {
            if(arr[i]<arr[i-1])
                sorted = false;
        }

        if(sorted) {
            cout<<0<<endl;
            continue;
        }

        int norno = 0;

        for(int i=0; i<n; i++) {
            if(s[i]=='N')
                norno++;
        }

        if(norno==0 or norno==n)
            cout<<-1<<endl;
        else {
            if(s[0]!=s[n-1])
                cout<<1<<endl;
            else {
                sorted = false;
                vector<int> sortedarr = arr;
                sort(sortedarr.begin(), sortedarr.end());
                
                int unsortedseg = 0;

                int i=0, j=n-1, first=s[0];

                while(s[i]==first and i<n) {
                    i++;
                }
                if(i>=n)
                    i = n-1;
                if(!checksorted(arr, sortedarr, 0, i))
                    unsortedseg++;
                if(i!=n-1)
                    if(!checksorted(arr, sortedarr, i+1, n-1))
                        unsortedseg++;
                int nunsortedseg = 0;
                while(s[j]==first and j>=0) {
                    j--;
                }
                if(j<0)
                    j = 0;
                if(!checksorted(arr, sortedarr, j, n-1))
                    nunsortedseg++;
                if(j!=0)
                    if(!checksorted(arr, sortedarr, 0, j-1))
                        nunsortedseg++;
                if(min(unsortedseg, nunsortedseg)==2)
                    cout<<2<<endl;
                else
                    cout<<1<<endl;
            }
        }
    }   
    return 0;
}