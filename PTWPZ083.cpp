#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	int n;
	cin >> n;
	getline(cin,s);
	while(n--){
		int suma=0;
		string l="";
		int znak=0;
		getline(cin,s);
			for(int i=0;i<s.length();i++){
				if(s[i]!='+'&&s[i]!='-'){
					l+=s[i];
				}
				else{
					if(znak==0)suma+=atoi(l.c_str());
					else suma-=atoi(l.c_str());
					l="";
				}
				if(s[i]=='+')znak=0;
				else if(s[i]=='-')znak=1;
		//	cout << suma << endl;
			}
			
					if(znak==0)suma+=atoi(l.c_str());
					else suma-=atoi(l.c_str());
					l="";
				
			cout << suma << endl;
			
			
		
		
		
		
		
		
	}
	
	
	
	
}