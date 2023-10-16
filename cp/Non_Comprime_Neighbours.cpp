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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

vector<int> primes(int n) {
    vector<int> prime;
    for(int i=3; i<n; i++) {
        if(isPrime(i))
            prime.pb(i);
    }
    return prime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> prime = primes(100000);
    int tc; 
    cin>>tc;

    whilecase {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(auto &i: arr) 
            cin>>i;
        
        int counteven = 0, poss = (2*n)/3 + ((2*n)%3!=0), maxno = INT_MIN;
        for(auto i: arr) {
            if(i%2==0)
                counteven++;
            maxno = max(maxno, i);
        }

        int countodd = n-counteven;

        if(countodd<=poss) {
            for(int i = 0; i<arr.size(); i++) {
                if(arr[i]%2)
                    arr[i] = 2;
            }
        }
        else {
            pair<int, int> p;
            p = {0, 0};
            for(auto i:prime) {
                if(i>maxno)
                    break;
                int count = 0;
                for(auto j:arr) {
                    if(j%i==0)
                        count++;
                }
                if(n-count<=poss) {
                    p = {i, count};
                }
            }
            // for(int i = 0; i<arr.size(); i++) {
            //     if(arr[i]%p.first)
            //         arr[i] = p.first;
            // }
        }

        for(auto i: arr)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

// int main() {
//     int tc;
//     cin>>tc;

//     whilecase {
//         int n;
//         cin>>n;

//         vector<int> arr(n);
//         for(auto &i: arr) 
//             cin>>i; 


//         int i;
//         for(i=1; i<n-1; i+=2) {
//             if(__gcd(arr[i-1], arr[i+1])>1)
//                 arr[i] = __gcd(arr[i-1], arr[i+1]);
//             else {
//                 arr[i] = (arr[i-1] * arr[i+1]);
//             }
//         }
//         if(i==n-1)
//             arr[i] = arr[i-1]; 
//         for(auto i: arr)
//             cout<<i<<" ";
//         cout<<endl;
//     }
// }