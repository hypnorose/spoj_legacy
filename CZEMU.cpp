#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	string tab[10000];
string s;
getline(cin,s);
int w=0;
	while(cin >> s){
		if(s=="List")break;
		tab[w]=s;
		w++;
	}
		sort(tab,tab+w);
	getline(cin,s);
	while(cin >> s){
	//	cout << s << endl;
		for(int i=0;i<w;i++){
			if(tab[i]==s){tab[i]="Brak";}
		}
	}
	
	sort(tab,tab+w);
	for(int i=0;i<w;i++){
		if(tab[i]!="Brak")cout << tab[i] << endl;
		
		
	}
	
	
	
	
}
