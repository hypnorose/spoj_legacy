#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int k;cin >> k;
	for(int h=0;h<k;h++)
	{
	double x,y,z,s;
	
	cin >> x >> y >> z;
	x+=y; //x=27
	s=y*z; //30
	s-=x;
	z--;
	s=s/z*12;
	s=round(s);
	cout << s << endl;
}
	
	return 0;
}