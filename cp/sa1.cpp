#include"bits/stdc++.h"
using namespace std;

#define go(i, s, n)         for (int i=(s), end=(n); i<=end; i++)
#define rgo(i, s, n)        for (int i=(s), end=(n); i>=n; i--)
#define getstr              getline (cin,str)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define all(x)              (x).begin(), (x).end()
#define sz(x)               (int)((x).size())
#define fr                  first
#define sc                  second
#define mem1(a)             memset(a, -1, sizeof(a))
#define mem0(a)             memset(a, 0, sizeof(a))
#define int                 long long
typedef unsigned long long  llu;
#define endl                "\n"
const int MOD = 1000000007;
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

template<typename T, typename T1> T amax(T &a, T1 b) {if(b>a) a = b; return a;};
template<typename T, typename T1> T amin(T &a, T1 b) {if(b<a) a = b; return a;};
const long long INF = 1e18;

const int N = 0;

Node* add_two_lists(Node* head1, Node* head2) {
    int c = 0;
    Node* ans = new Node();
    ans -> val = -1;
    ans -> next = NULL;

    Node* prev = ans;
    while(head1 and head2) {
        int s = head1 -> val + head2 -> val + c;
        c = s / 10;
        s = s % 10;

        Node* cur = new Node();
        cur -> val = s;
        cur -> next = NULL;

        prev -> next = cur;
        prev = cur;

        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    while(head1) {
        int s = head1 -> val + c;
        c = s / 10;
        s = s % 10;

        Node* cur = new Node();
        cur -> val = s;
        cur -> next = NULL;

        prev -> next = cur;
        prev = cur;
        
        head1 = head1 -> next;
    }

    while(head2) {
        int s = head2 -> val + c;
        c = s / 10;
        s = s % 10;

        Node* cur = new Node();
        cur -> val = s;
        cur -> next = NULL;

        prev -> next = cur;
        prev = cur;

        head2 = head2 -> next;
    }

    if(c > 0) {
        Node* cur = new Node();
        cur -> val = c;
        cur -> next = NULL;

        prev -> next = cur;
        prev = cur;
    }

    return ans -> next;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    
    int t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}