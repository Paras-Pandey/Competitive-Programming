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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin>>tc;

    whilecase {
        int n, k;
        cin>>n>>k;
        if(n%2)
            cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
        else {
            for(int i=3; i<=n/2; i++) {
                if(n%i==0) {
                    int num1 = n/i, num2 = n/i*((i-1)/2), num3 = (n/i)*((i-1)/2+((i-1)%2==1));
                    cout<<num1<<" "<<num2<<" "<<num3<<endl;
                    break;
                }
            }
        } 
    }
    return 0;
}
#include"bits/stdc++.h"
using namespace std;

#define SIEVE
int arr[N];
for(int i=1; i<=N; i++) {
    if(arr[i]==0) {
        for(int j=i*i; j<=N; j+=i {
            arr[i] = 1;
        }
    }
    arr[i] ^= 1;
}