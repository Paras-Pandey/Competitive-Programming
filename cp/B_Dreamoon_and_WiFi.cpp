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

void compute(string s, float accu, float val, float & count)
{
    if(s=="")
    {
        if(val==accu)
            count++;
        return;
    }
    if(s[0]=='+')
        compute(s.substr(1, s.length()-1), accu, val+1, count);
    else if(s[0]=='-')
        compute(s.substr(1, s.length()-1), accu, val-1, count);
    else
    {
        compute(s.substr(1, s.length()-1), accu, val+1, count);
        compute(s.substr(1, s.length()-1), accu, val-1, count);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2;
    cin>>s1>>s2;

    float accu = 0, prob = 1, ans = 0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='+')
            accu++;
        else    
            accu--;
        if(s2[i]=='?')
            prob*=2;
    }
    compute(s2, accu, 0, ans);
    double proba = double(ans)/double(prob);
    cout<<fixed<<setprecision(12)<<proba<<endl;
    return 0;
}