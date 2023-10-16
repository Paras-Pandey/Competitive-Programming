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
        int n;
        cin>>n;

        vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        string ans = "";
        if(n<=9)
            cout<<n<<endl;
        else
        {
            if(n>45)
                cout<<-1<<endl;
            else
           {
                while(!num.empty())
                {
                    for(int i=num.size()-1; i>=0; i--)
                    {
                        if(n==num[i])
                            ans = to_string(num[i]) + ans, num.erase(num.begin()+i), n=0;
                        else if(n==0)
                            break;
                    }
                    if(n>num[num.size()-1])
                        ans = to_string(num[num.size()-1]) + ans,  n-=num[num.size()-1], num.pop_back(); 
                    else if(n<num[0])
                        break;
                }
                if(n==0)
                    cout<<ans<<endl;
                else
                    cout<<-1<<endl;
            }
        }
    }
    return 0;
}