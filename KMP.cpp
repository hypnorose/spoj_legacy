#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	string s,p;
	int n;
	while(t--){
		s="";
		p="";	
		cin >> n;
		cin >> p >> s;
		for(int i=0;i<s.length();i++){
			for(int j=0;j<p.length();j++){
				if(p[j]!=s[i+j])break;
				
				if(j==p.length()-1)cout << i << endl;
			}
			
			
		}
	
	}
	
}