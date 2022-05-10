#include <iostream>
#include <cmath>
using namespace std;

int main(){
int r,a,b,c;
cin >> r >> a >> b >> c;
	double rada =( a * M_PI ) / 180.0f;
	double suma=0;
	suma+=(sin(rada)*r*r)/2;
	rada =( b* M_PI ) / 180.0f;
			suma+=(sin(rada)*r*r)/2;
		
		
		
 rada =( c * M_PI ) / 180.0f;
		suma+=(sin(rada)*r*r)/2;
	
	a=360-a-b-c;
		 rada =( a * M_PI ) / 180.0f;
			suma+=(sin(rada)*r*r)/2;
			cout.precision(4);
			cout << fixed << suma;
}