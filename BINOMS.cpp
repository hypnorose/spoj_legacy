#include <iostream>
using namespace std;

long double newton(long double n, long double k){
	long double suma=1;

	for(long double i=0;i<k;i++){
	suma*=(n-i)/(i+1);
		
		
	}
	return suma;
	
	
}


int main() {
	int h;
	cin >> h;
	while(h--){
	long double n,k;
	cin >> n >> k;
	cout << fixed;
	cout.precision(0);
	if(k<n-k)
	cout << newton(n,k);
	else
	cout << newton(n,n-k);
	cout << endl;
	}
	return 0;
}