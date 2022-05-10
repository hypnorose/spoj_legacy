#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#define INF (1<<20)
using namespace std;
unsigned long long tab[INF];
int main(){
	int h;cin >> h;
	while(h--){
	
	int a,b;char z,zx='0';
	cin >> a >> b;
	int ile=0,o=0,jedynki=0;
	for(int i=0;i<a;i++){
		cin >> z;
		if(z==zx){
			ile++;
			
		}
		else{
			
			tab[o]=ile;
			o++;
		//	cout << tab[o-1] << " ";
			ile=0;
		}	
	}

			tab[o]=ile;
			o++;
	
	
	int suma=0,m=0;
	for(int i=0;i<=min(b,o-1);i++)suma+=tab[i];
	if(m<suma+b)m=suma+min(b,o-1);
//cout << suma << endl;
	for(int i=b+1;i<o;i++){
		//	cout << suma << endl;
		suma+=tab[i];
		suma-=tab[i-b-1];
			if(m<suma+b)m=suma+min(b,o-1);
	}
	cout << m << endl;
	}
}