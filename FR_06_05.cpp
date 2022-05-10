#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
	double suma=0,x,y,popx,popy;
	cin >> popx >> popy;
	for(int i=0;i<n-1;i++){
		cin >> x >> y;
		popx=x-popx;
		popy=y-popy;
		suma+=sqrt(popx*popx+popy*popy);
		popx=x;
		popy=y;
	}
	cout.precision(2);
	cout << fixed << suma/1000 << endl;
	}
}