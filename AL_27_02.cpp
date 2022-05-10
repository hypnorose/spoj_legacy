#include <iostream>
#include <cmath>
using namespace std;

int main(){

	string s;
	while(getline(cin,s)){
		cout << s[0];
		for(int i=1;i<s.length();i++){
			if(s[i]==' ')cout << s[i+1];
			if(s[i]=='.')cout << " ";
		}
		cout << endl;
		
	}
}
