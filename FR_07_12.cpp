#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
	unsigned short int x[n],y[n],typ[n];
	unsigned short int hx=0,lx=20000,hy=0,ly=20000;
	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i] >> typ[i];
		if(typ[i]){
			if(x[i]<lx)lx=x[i];
			if(x[i]>hx)hx=x[i];
			if(y[i]>hy)hy=y[i];
			if(y[i]<ly)ly=y[i];
		}
		
	}
	int w=0;
	for(int i=0;i<n;i++){
		if(x[i]>=lx&&x[i]<=hx&&y[i]>=ly&&y[i]<=hy)w++;
		
		
	}
	cout << w << endl;
	}
}