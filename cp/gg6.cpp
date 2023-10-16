#include"bits/stdc++.h"
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

pair<int, int> dfs(Node* root) {
    if(root == NULL)
        return {0, -1};
    
    auto left = dfs(root -> left);
    auto right = dfs(root -> right);

    if(root -> left == NULL && root -> right == NULL)
        return {1, root -> val};
    if(root -> left == NULL && right.second == root -> val)
        return {right.first + 1, root -> val};
    if(root -> right == NULL && left.second == root -> val)
        return {left.first + 1, root -> val};
    if(right.second == left.second && root -> val == right.second)
        return {left.first + right.first + 1, root -> val};
    return {left.first + right.first, -1};  
}

int main() {
    int n;
    cin>>n;

    if(n == -1) {
        cout<<0<<endl;
        return 0;
    }
    else if(n == 0) {
        cout<<1<<endl;
        return 0;
    }

    int x;
    cin>>x;

    Node* root = new Node(x);
    queue<Node*> q;

    q.push(root);

    for(int i = 1; i <= n; i++) {
        int m = q.size();
        for(int j = 0; j < m; j++) {
            auto cur = q.front();
            q.pop();

            cin>>x;
            if(x != -1) {
                Node* nnode = new Node(x);
                cur -> left = nnode;
                q.push(nnode);
            }

            cin>>x;
            if(x != -1) {
                Node* nnode = new Node(x);
                cur -> right = nnode;
                q.push(nnode);
            }
        }
    }

    cout<<dfs(root).first;
}