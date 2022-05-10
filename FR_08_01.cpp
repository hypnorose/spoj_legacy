#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'){
			cout << "Tak";
			return 0;
			
		}
		
	}
	cout << "Nie";
}