#include"bits/stdc++.h"
using namespace std;

class Solution {
    public:
    int maxdepth;
    
    int findh(int par, vector<int> adj[]) {
        if(adj[par].size() == 0)
            return 1;
        
        int h = 0;
        for(auto i: adj[par])
            h = max(h, findh(i, adj));
            
        return h + 1;
    }
    
    pair<int, int> sol(int par, vector<int> adj[], int curh) {
        if(adj[par].size() == 0) {
            return {curh, par};
        }
        
        vector<pair<int, int>> kids(adj[par].size());
        
        pair<int, int> res = {-1, -1};
        for(int i = 0; i < adj[par].size(); i++) {
            kids[i] = sol(adj[par][i], adj, curh + 1);
            if(kids[i].first == maxdepth) {
                if(res.first == -1)
                    res = kids[i];
                else
                    return {maxdepth, par};
            }
        }
        
        return res;
    }
    
    int junction(int N, vector<int> p){
        maxdepth = 0;
        
        vector<int> adj[N];
        int par;
        for(int i = 0; i < N; i++) {
            if(p[i] != -1)
                adj[p[i]].push_back(i);
            else
                par = i;
        }
        
        maxdepth = findh(par, adj);
        
        return sol(par, adj, 0).second;
    }
};


int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    Solution obj;
    cout<<obj.junction(n, arr);
}
