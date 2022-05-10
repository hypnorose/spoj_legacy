#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	double a;
	
	cin >> a;
	unsigned long long t=sqrt(a);
	for(int i=t;;i--){
		unsigned long long b=(a/i)*100000;
		if((b%100000==0)){
			cout.precision(0);
		cout << fixed<< (2*i)+2*(a/i) << endl;
		break;
		}
	}
	}
}
