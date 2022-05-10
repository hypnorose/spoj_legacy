#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a,b;
	
	while(n--){
		cin >> a >> b;
		int tab[(int)('z'+1)];
		for(int i='a';i<='z';i++){
			tab[i]=0;
		}
		for(int i=0;i<a.length();i++){
			tab[a[i]]++;
		}
		
		for(int i=0;i<b.length();i++){
			tab[b[i]]--;
		}
		int minus=0,plus=0;
		for(int i='a';i<='z';i++){
			if(tab[i]>0)plus+=tab[i];
			else minus-=tab[i];
		}
		int w=0;
		w+=min(plus,minus);
		plus-=w;
		minus-=w;
		w+=plus;
		w+=minus;
		cout << w << endl;
		
		
		
		
		
	}
	return 0;
}
