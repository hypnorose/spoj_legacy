#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
unsigned long long  tab[1<<25];
int main(){
	int n=0;
	
		while(cin >> tab[n++]);
	
	sort(tab,tab+n);
	int l=0;
	l++;
	for(int i=1;i<n;i++){
	//	cout << tab[i-1] << " "<< tab[i] << endl;
		if(tab[i]==tab[i-1])l++;
		else{
			if(l%3==0){l++;continue;}
			else {
			cout << tab[i-1];
			return 0;
			}
		}
		l=l%3;		
	}
	cout << tab[n-1];
}