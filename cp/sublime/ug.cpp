#include"bits/stdc++.h"
using namespace std;

int main() {
	string s;
	cin>>s;

	if(s[s.size() - 1] <= '9' && s[s.size() - 1] >= '0') {
		int len = s.size();
		if(len > 99) {
			if(s[len - 3] - '0' == (len - 3) / 100 && s[len - 2] - '0' == (((len - 3) % 100) / 10) && s[len - 1] - '0' == (((len - 3) % 10) / 10))
				cout<<-1<<endl;
			else if(s[len - 2] - '0' == (len - 2) / 100 && s[len - 1] - '0' == (((len - 2) % 100) / 10))
				cout<<((len - 2) % 10) / 10<<endl;
			else if(s[len - 1] - '0' == (len - 1) / 100)
				cout<<((len - 1) % 10) / 10<<endl;
			else 
				cout<<-1<<endl;
		}
		else if(len > 9) {
			if(s[len - 2] - '0' == (len - 1) / 10 && s[len - 1] - '0' == (len - 1) % 10)
				cout<<-1<<endl;
			else
				cout<<len % 10<<endl;
		}
		else {
			if(s[len - 1] - '0' == (len - 1))
				cout<<-1<<endl;
			else
				cout<<len<<endl;
		}
	}
}