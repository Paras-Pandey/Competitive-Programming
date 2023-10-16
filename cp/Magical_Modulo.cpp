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

bool checkifans(int* check, int i, vector<int> & arr) {
    int n = arr.size();
    if(i>2e7)
        return false;
    for(int j=0; j<n; j++) {
        check[j] = 0;
    }
    for(int j=0; j<n; j++) {
        if(arr[j]%i==0 or arr[j]%i>n or check[(arr[j]%i)-1]==1)    return false;
        check[(arr[j]%i)-1] = 1;
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

        llu dif = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            dif += (arr[i]-(i+1));
        }

        if(dif==0) {
            cout<<"YES "<<n+1<<endl;
            continue;
        }
        if(dif<0) {
            cout<<"NO"<<endl;
            continue;
        }
        int check[n];

        bool doneanddusted = false;
        for(int i=1; i*i<=dif and i<20000001; i++) {
            if(dif%i==0) {
                if(checkifans(check, i, arr)) {
                    cout<<"YES "<<i<<endl;
                    doneanddusted = true;
                    break;
                }
                else if(checkifans(check, dif/i, arr)) {
                    cout<<"YES"<<" "<<dif/i<<endl;
                    doneanddusted = true;
                    break;
                }
            }
        }

        if(!doneanddusted)
            cout<<"NO"<<endl;
    }
    return 0;
}