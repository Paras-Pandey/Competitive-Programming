#include"bits/stdc++.h"
using namespace std;


int main()
{
    long long int n, m, a;
    cin>>n>>m>>a;

    long long int countx = 0, county = 0;

    countx = n/a + (n%a!=0);
    county = n/a + (m%a!=0);
    cout<<countx*county;
}