#include <iostream>
#include <cmath>
using namespace std;
int tab[30];
int h;
void wypisz(int m,int l, int n){
	l+=m;
	tab[n]=m;
	if(l==h){
		for(int i=1;i<=n;i++)cout << tab[i] << " ";
		cout << endl;
		return;
	}
	for(int i=m;i<=h-l;i++){
		wypisz(i,l,n+1);
	}
	
	
}


int main() {
	int w;
	cin >> w;
	while(w--){
	cin >> h;
	for(int i=1;i<=h;i++)
	wypisz(i,0,1);
	cout << endl;
}

	return 0;
}