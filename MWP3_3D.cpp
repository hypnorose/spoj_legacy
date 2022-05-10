#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	double d;int ile;
	cin >> d >> ile;
	d*=M_PI;
	if(ile%2==0){
		cout.precision(3);
		cout << fixed << d/ile << " " << ile/2 << endl;
	}
	else{
		cout.precision(3);
		cout << fixed << d/(ile*2)<< " " <<ile << endl;
	}
}
}