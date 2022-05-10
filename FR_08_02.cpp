#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	while(n--){
	
	int tab[6];
	for(int i=0;i<6;i++){
		scanf("%d",&tab[i]);
		
	}
	int suma=tab[0]+tab[1];
	cout << (suma*2)-tab[0]-tab[2]-tab[4] << " " <<(suma*2)-tab[1]-tab[3]-tab[5] << endl;
	}
}