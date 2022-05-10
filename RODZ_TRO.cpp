#include <bits/stdc++.h>
using namespace std;


int main(){
	int tab[10];
	while(cin >> tab[0] >> tab[1] >> tab[2]){
		sort(tab,tab+3);
		//cout << tab[0] << tab[1] << tab[2];
		if(tab[0]+tab[1]<=tab[2]){
			cout << "brak" << endl;
			continue;
		}
		if(tab[0]*tab[0]+tab[1]*tab[1]==tab[2]*tab[2]){
				cout << "prostokatny" << endl;
			continue;
		}
		else if(tab[0]*tab[0]+tab[1]*tab[1]>tab[2]*tab[2])
		{
				cout << "ostrokatny" << endl;
			continue;
		}
		else if(tab[0]*tab[0]+tab[1]*tab[1]<tab[2]*tab[2])
		{
				cout << "rozwartokatny" << endl;
			continue;
		}
		
	}
	
}