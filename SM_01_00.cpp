#include <iostream>
using namespace std;

int main() {
	string a;int k;cin>>k;getline(cin,a);
	while(k--){
	getline(cin,a);
		for(int i=0;i<a.length();i+=5){
			int s=0;
			s+=(a[i]-48)*16;
			s+=(a[i+1]-48)*8;
			s+=(a[i+2]-48)*4;
			s+=(a[i+3]-48)*2;
			s+=(a[i+4]-48);
			cout << (char)(s+65);
		}
		cout << endl;
	}
	
	return 0;
}