#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	char z,id;
	int m=0,suma=0,o=1;
	int tab[200];
	for(int i='a';i<='z';i++){
				tab[i]=0;
			}
		//cout << ('a'-'A');
	while(cin >> z){
		if(z>='a'&&z<='z')tab[z]++;
		else if(z>='A'&&z<='Z')tab[z+32]++;
		
		if(z=='.'){
			m=0;suma=0;
			int m2=0;
			for(int i='a';i<='z';i++){
				if(tab[i]>m){	
				m2=m;
				m=tab[i];
				id=i;
				}
				else if(tab[i]>m2&&tab[i]<=m){
					m2=tab[i];
				}
				suma+=tab[i];
				tab[i]=0;
			}
			cout << o << " - ";
			if(m>2*m2)cout << (char)id;
			else cout << "BRAK";
			o++;
			cout << endl;
			//cout << m2 << " " <<m << endl;;
			
		}
		
		
	}
}