#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
  double r,d,w,pi=3.141592654;
	
	
	cin >> r >> d;
	//pitagoras to bêdzie chyba
	d=d/2;
	d=d*d;
	r=r*r;
	w=r-d;
	w=w*pi;
	  cout.setf(ios::fixed);
    cout.precision(2);
	cout << w;
	
	
	
	return 0;
}