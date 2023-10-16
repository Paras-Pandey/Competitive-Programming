#include"bits/stdc++.h"
using namespace std;

int arr[(int)1e6+10];
set<int> primes;
void prime()
{
    for(int i=3; i<(int)1e6+1; i+=2)
    {
        if(arr[i]==0)
        {
            primes.insert(i);
            for(int j=i; j<=(int)1e6; j+=i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;

    long long int x;
    prime();
    for(long long int i=0; i<n; i++)
    {
        cin>>x;
        double y= sqrt(x);
        if(x==4)
            cout<<"YES"<<"\n";
        else if(x%2==0)
            cout<<"NO"<<"\n";
        else if(y==(int)sqrt(x) and primes.find(sqrt(x))!=primes.end())
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}