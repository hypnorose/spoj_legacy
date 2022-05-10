#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int k;
	cin >> k;
	while(k--){
	
	double a,b,h,t,c;

	cin >> a >> b;	c=(a+b)/2;
	if(b<a)swap(b,a);
	t=(b-a)/2;
	h=(c*c)-(t*t);
	h=sqrt(h);
	cout.precision(2);
	
	cout << fixed << h*(a+b)/2 << endl;
}
}
