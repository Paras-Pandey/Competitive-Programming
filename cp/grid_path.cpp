#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void dfs(vector<vector<int>> &arr, int i, int j, int n, int m) {
	if(i>n or j>m)
		return;
    if(i==n and j==m) {
        return;
    }
	if(i<n) {
		int sub = min(arr[i][j], arr[i+1][j]);
        arr[i][j] -= sub;
        arr[i+1][j] -= sub;
	} 
	if(j<m) {
		int sub = min(arr[i][j], arr[i][j+1]);
        arr[i][j] -= sub;
        arr[i][j+1] -= sub;
	}
    dfs(arr, i+1, j, n, m);
    dfs(arr, i, j+1, n, m);
}

bool check(vector<vector<int>>& arr, int n, int m) {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
            if(i==n-1 and j==m-1)
                continue;
			if(arr[i][j]!=0)
				return false;
        }
	}
	return true;
}
int main() {

	int t;
	cin>>t;

	while(t--) {
		int n, m;
		cin>>n>>m;

		vector<vector<int>> arr(n, vector<int>(m));
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++)
				cin>>arr[i][j];
		}

		if(arr[0][0]!=arr[n-1][m-1]) {
			cout<<"NO"<<endl;
			break;
		}
		
		dfs(arr, 0, 0, n-1, m-1); 
		if(check(arr, n, m))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}