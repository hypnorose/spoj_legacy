#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long xp,yp,xtemp,ytemp,max=0,temp,xmax,ymax,n;
	cin >> xp >> yp >> n;
	for(int i=0;i<n;i++){
		
		cin >> xtemp >> ytemp;
		temp=(xp-xtemp)*(xp-xtemp)+(yp-ytemp)*(yp-ytemp);
		if(temp>max){max=temp;xmax=xtemp;ymax=ytemp;}
			
		
		
		
		
		
		
		
	}
		cout << xmax << " " << ymax << endl;
		cout << fixed;
		cout.precision(2);
		
		cout << sqrt(max) << endl;
	return 0;
}