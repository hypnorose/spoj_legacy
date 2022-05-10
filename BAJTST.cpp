#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {
	int h;
	cin >> h;
	while(h--){
	int n; double p;
	cin >> n >> p;
	double x=0;
	for(int i=0;i<n;i++){
		double a,b,c;
		cin >> a >> b >> c;
		double s =(a+b+c)/2;
		a=s-a;
		b=s-b;
		c=s-c;
		s=s*a*b*c;
	//cout.precision(0);
	//cout << s;
		if(s>0)x+=sqrt(s)/10;
	}
	
	 cout<<fixed<<setprecision(0)<<x*p << endl;
	}
	return 0;
}