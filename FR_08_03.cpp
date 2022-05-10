#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	bool b;
	cin >> n;string nowe;	string s;
	while(n--){
	
	
	
	cin >> s >> nowe;
	if(s.length()!=nowe.length()){
		cout << "error" << endl;
		continue;
		
	}
		b=0;
	for(int i=0;i<s.length();i++){
		if(nowe[i]=='*')continue;
		else if(nowe[i]==s[i])continue;
		else {
			cout << "error" << endl;	b=1;
			break;
		
		}
		
	}	
		if(b==0)cout << "ok" << endl;
	}
}