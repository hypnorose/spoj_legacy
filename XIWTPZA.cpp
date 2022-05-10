#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
unsigned int tab[1<<27];
int main(){
	int h;
	cin >> h;
	while(h--){
	
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a<b)swap(a,b);
	if(c<d)swap(c,d);
	if(a>c&&b>d){
		cout << "TAK" << endl;
		continue;
	} 
	//cout.precision(4);
//	cout << fixed << b << " " << (2*c*d*a+(c*c-d*d)*sqrt(c*c+d*d-a*a))/(c*c+d*d);
	double x = d/sqrt(2);
	if((b-x)*(b-x) + (a-x)*(a-x) > c*c)cout << "TAK" << endl;
	else cout << "NIE" << endl;
	}
}