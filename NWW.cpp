#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
		unsigned long long a,b,t,pop,akt;
	cin >> pop;

	for(int i=1;i<n;i++){
		cin >> akt;
		a=pop;
		b=akt;
		while(b!=0){
			if(a<b)swap(a,b);
			t=b;
			b=a%b;
			a=t;
		}
		akt=(akt/a)*(pop);
		pop=akt;
	}
	cout << akt << endl;		
			
	}
				
	return 0;
}