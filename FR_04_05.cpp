#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	double a,b;
	cin >> a >> b;
	double bx=b*2;
	double ax=a*2;
	double c=ax*ax+bx*bx;
	c=sqrt(c);
	c/=2;
	double pi=3.1415926f;
	double poleo=c*c*pi;
//	cout << c << endl;
	//cout << poleo << endl;
	double polew=((ax*bx)/2)+(a*a*pi)+(b*b*pi);
	cout.precision(2);
	cout << fixed << polew-poleo<< endl;
	
}
}
