#include <iostream>
using namespace std;
int main(){
	int h;
	cin >> h;
	while(h--){
	
	string a,b,c,d;
	cin >> c >> d;
	for(int i=c.length()-1;i>=0;i--){
		a+=c[i];
		
	}
	
	for(int i=d.length()-1;i>=0;i--){
		b+=d[i];
		
	}
	//cout << a << " " << b;
	if(a.length()>b.length())cout << a;
	else if(a.length()<b.length())cout << b;
	else if(a.length()==b.length()){
		
		for(int i=0;i<a.length();i++){
			
			if(a[i]>b[i]){
				cout << a;
				break;
			}
			else if(a[i]<b[i]){
				cout << b;
				break;
				
			}
			
		}
	
	}
			cout << endl;
		
	}
	}
