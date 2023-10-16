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
    
    string s;
    cin>>s;

    int arr[26] = {0};
    FOR(i, s.length())  arr[s[i]-'a']++;

    int couno;
    bool winner = true;
    while(true)
    {
        couno = 0;
        FOR(i, 26)  
        {
            if(arr[i]%2)
                couno++;
        }
        if(couno<2)
            break;
        else
        {
            if(couno<3)
            {
                int i = 0;
                for(; i<26; i++)
                    if(arr[i]%2==0 and arr[i]>0)
                    {
                        arr[i]--;
                        break;
                    }    
                if(i==26)
                    for(i=0; i<26; i++)
                        if(arr[i]>0)
                        {
                            arr[i]--;
                            break;
                        } 
                winner=!winner;
            }
            else
            {
                int i=0;
                for(; i<26; i++)
                    if(arr[i]%2)
                    {
                        arr[i]--;
                        break;
                    }    
                if(i==26)
                    for(i=0; i<26; i++)
                        if(arr[i]>0)
                        {
                            arr[i]--;
                            break;
                        } 
                winner=!winner;
            }     
        }    
    }
    if(winner)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}