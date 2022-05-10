#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
	string s;
	cin >>s;
	int w=0,minus=0,plus=0;
	for(int i=0;i<s.length();i++){
		char z=s[i];
		if(z=='D')w--;
		if(z=='U')w++;
		if(w<minus)minus=w;
		if(w>plus)plus=w;
	}
	minus=abs(minus);
	if(plus+minus>=n)cout << "NIE" << endl;
	else cout << "TAK" << endl;
	}
}