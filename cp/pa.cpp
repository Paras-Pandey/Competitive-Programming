string LCS(string strArr[],int arrLength) 
{
    int m = strArr[0].size();
    int n = strArr[1].size();
    string X = strArr[0];
    string Y = strArr[1];
	int L[m + 1][n + 1];

	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	int index = L[m][n];
	string lcs; 
	int i = m, j = n;
	while (i > 0 && j > 0) {
		if (X[i - 1] == Y[j - 1]) {
			lcs.push_back(X[i - 1]);
			i--;
			j--;
			index--;
		}
		else if (L[i - 1][j] > L[i][j - 1])
			i--;
		else
			j--;
	}
	return lcs;
}

string romanNumeralReduction(string str) {
    unordered_map<char, int> val = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} 
    }

    int number = 0;
    for(auto i: str) {
        number += val[i];
    }

    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;   
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        ans.push_back(sym[i]);
      }
      i--;
    }
}

void sol(int i, vector<int> adj[], int len[], int vis[]) {
    vis[i] = 1;
    
    for(auto j: adj[i]) {
        if(!vis[j])
            sol(i, adj, len, vis);
        len[i] = max(len[i], 1 + len[j]);
    }
}

string farthestNodes(string strArr, int arrlength) {
    vector<int> adj[26];
    for(int i = 0; i < arrlength; i++) {
        adj[strArr[i][0] - 'a'].push_back(strArr[i][2] - 'a');
        adj[strArr[i][2] - 'a'].push_back(strArr[i][0] - 'a');
    }

    int len[26] = {0};
    int vis[26] = {0};

    for(int i = 0; i < 26; i++) {
        if(!vis[i]) {
            sol(i, adj, len, vis);
        }
    }

    int ans = 0;
    for(int i= 0; i < 26; i++) {
        ans = max(ans, len[i]);
    }

    return ans;
}