#include"bits/stdc++.h"
using namespace std;

#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
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
    
    string in;
    cin>>in;

    if(in.length()<=3)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int countab = 0, countba=0, i=0;
        string check = "AB";
        while(i<in.length())
        {
            if(in.substr(i, 2) == check)
            {
                i+=2;
                if(check=="BA")
                {
                    countab += 1;
                    break;
                }
                else
                    check="BA";
            }
            else
            {
                i++;
            }
        }
        check = "BA";   i=0;
        while(i<in.length())
        {
            if(in.substr(i, 2) == check)
            {
                i+=2;
                if(check=="AB")
                {
                    countab += 1;
                    break;
                }
                else
                {
                    check="AB";
                }
            }
            else
            {
                i++;
            }
        }
        if(countab>=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}