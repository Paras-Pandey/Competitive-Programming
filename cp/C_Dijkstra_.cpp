// #include"bits/stdc++.h"
// using namespace std;

// #define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
// #define whilecase           while (tc--)
// #define FOR(i, n)           for (int i=0; i<n; i++)
// #define cinstr              cin >> str
// #define getstr              getline (cin,str)
// #define vi                  vector <int>
// #define vs                  vector <string>
// #define pii                 pair <int,int>
// #define mii                 map <int,int>
// #define pb                  push_back
// #define in                  insert
// typedef unsigned long long  llu;
// typedef long long           lld;
// typedef unsigned int        U;
// #define endl                "\n"
// const int MOD = 1000000007;
// const int MAX = 1000005;
// int SetBit (int n, int x) { return n | (1 << x); }
// int ClearBit (int n, int x) { return n & ~(1 << x); }
// int ToggleBit (int n, int x) { return n ^ (1 << x); }
// bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

// const int SIZE = 1e5+3;
// vector<vector<pii>> adj;
// bitset<SIZE> t;
// int mp[SIZE], d[SIZE];

// bool solve(vector<vector<pair<int, int>>> am, int n)
// {
//     fill(d, d+n+1, INT_MAX);
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     d[1] = 0;
//     pq.push(make_pair(0, 1));
//     mp[1] = -1;

//     while(!pq.empty())
//     {
//         int node = pq.top().second;
//         pq.pop();
        
//         if(node==n) return true;

//         t[node] = true;
//         for(auto &i:am[node])
//         {
//             if(!t[i.first] and d[i.first]>d[node]+i.second)
//             {
//                 d[i.first] = d[node]+i.second;
//                 pq.push(make_pair(d[i.first], i.first));
//                 mp[i.first] = node;
//             }
//         }
//     } 
//     return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int n, m, x, y, w;
//     cin>>n>>m;

//     FOR(i, m)
//     {
//         cin>>x>>y>>w;
//         adj[x].pb(make_pair(y, w));
//         adj[y].pb(make_pair(x, w));
//     }

//     if(solve(adj, n))
//     {
//         vector<int> path;

//         for(int v = n; v != -1; v = mp[v]) path.pb(v);

//         for(int i = path.size()-1; i > 0; --i) cout<<path[i];

//         cout<<path[0];
//     }
//     else
//         cout<<-1;
//     return 0;
// }

// ==================================================
// Problem  :   20C - Dijkstra?
// Run time :   0.078 sec.
// Language :   C++11
// ==================================================

#include <cstdio>
#include <algorithm>
#include <bitset>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

typedef     pair<int,int>       ii;

const int MAXN = 1e5 + 3;
const int INF = INT_MAX;

vector<vector<ii> > adjList;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t)
{
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    fill(dist, dist+n+1, INF);

    pq.push(ii(0, s));
    dist[s] = 0;
    par[s] = -1;

    while(!pq.empty()) {
        int u = pq.top().second; pq.pop();

        if(u == t) return true;

        isDone[u] = true;

        for(auto &pr : adjList[u]) {
            int v = pr.first, w = pr.second;

            if(!isDone[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push(ii(dist[v], v));
                par[v] = u;
            }
        }
    }

    return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int m;
    scanf("%d %d", &n, &m);

    adjList.resize(n+3);

    int u, v, w;

    while(m--) {
        scanf("%d %d %d", &u, &v, &w);
        adjList[u].push_back(ii(v, w));
        adjList[v].push_back(ii(u, w));
    }

    if(dijkstra(1, n)) {
        vector<int> path;

        for(v = n; v != -1; v = par[v]) path.push_back(v);

        for(int i = path.size()-1; i > 0; --i) printf("%d ", path[i]);

        printf("%d\n", path[0]);
    }
    else puts("-1");

    return 0;
}
