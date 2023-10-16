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
        string str;
        cinstr;
        int pair = 0;
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]!=str[i+1])
            {   
                if(i<str.size()-2)
                    str = str.substr(0, i) + str.substr(i+2);  
                else 
                    str = str.substr(0, i);
                pair++;
                if(str.size()==0)
                    break;
                i=-1;
            } 
        }
        if(pair%2)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}