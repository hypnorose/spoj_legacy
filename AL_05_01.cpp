#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	unsigned long long l;
	string s;
	while(cin >> l){
		s="";
		unsigned long long suma=0;
		while(l!=0){
			if(l%2==0)s+='0';
			else s+='1';
			l/=2;
		}
		unsigned long long mn=1;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='1')suma+=mn;
			mn*=2;
		}
		cout << suma << endl;
	}
}