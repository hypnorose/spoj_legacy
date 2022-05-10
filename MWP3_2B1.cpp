#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
	int k;string a;
	cin >> k;	getline(cin,a);
	while(k--){
	int ix=0,il=0;
	string l="";
	getline(cin,a);int pm=1;int grand=1;
	for(int i=0;i<a.length();i++){
		
		
			if(a[i]>='0'&&a[i]<='9')l+=a[i];
	
		else if(a[i]=='x'){
			
			
			if(l!="")ix+=atoi(l.c_str())*pm*grand;
			else ix+=1*pm*grand;
		
			l="";
			
		}
		else{
		
			il+=atoi(l.c_str())*pm*grand;
	
	
			l="";
			
		}
		
		
		
		
		
		
		if(a[i]=='+')pm=1;
		else if(a[i]=='-')pm=-1;
		else if(a[i]=='='){grand=-1;pm=1;}
		
	
		
		
		
		
		
		
		
		
		
		
		
	}
	
	if(l!=""){	il+=atoi(l.c_str())*pm*grand;
		
	
			l="";
	}
	

	if(ix==0)cout << "NIE";else
	cout << il/ix*-1;
	cout << endl;
	}
	return 0;
}