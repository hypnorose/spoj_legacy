#include <iostream>
using namespace std;

int main() {
	double a,b,c,w,x;
	while(cin >> a >> b >> c)
	{
		w=b*b;
		x=4*a*c;
		if(w>x)cout << "2";
		else if(w<x)cout << "0";
		else cout << "1";
		cout << endl;
		
		
		
		
		
	}
	
	return 0;
}