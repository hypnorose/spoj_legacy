#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	double a,b;char z;
	cin >> a >> z >> b;
	a=(int)a%12;
	a=(a/12)*360+(b/60)*30;
	b=(b/60)*360;
	if(a>360)a-=360;
	if(b>360)b-=360;
	//cout << fixed << a  << " "<< b << endl;
	if(a<b)swap(a,b);	cout.precision(1);
	if(a-b>180)	cout << fixed << 360-(a-b) << endl;
	else
	cout << fixed << a-b << endl;
	}
}