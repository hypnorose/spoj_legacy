//multizbior
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
	string tab[n];
	string s;
	for(int i=0;i<n;i++){
		cin >> s;
		sort(&s[0],&s[0]+s.length());
		tab[i]=s;
	}
	
	sort(tab,tab+n);
	int temp=1,m=1;
	for(int i=1;i<n;i++){
		
		if(tab[i]==tab[i-1])temp++;
		else {
			temp=1;
		}
		if(temp>m)m=temp;
		//cout << tab[i] << endl;
	}
		cout << m << endl;
	}
}

