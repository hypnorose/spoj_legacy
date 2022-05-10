#include <iostream>
using namespace std;

int napisz(int a, int b)
{
	
	if(a>=10)cout << a;
	else cout << "0" << a;
	cout << ":";
	if(b>=10)cout << b;
	else cout << "0" << b;
	cout << ",";
	
}


int main() {
	int g,m,p;char z;
	cin >> g >> z >> m;
	napisz(g,m);
	while(cin >> p)
	{
		m+=45;while(m>=60){m-=60;g++;if(g>=24)g=0;}
		napisz(g,m);
		m+=p;
		
		while(m>=60){m-=60;g++;if(g>=24)g=0;}
			napisz(g,m);
		
 		
		
	}
		m+=45;while(m>=60){m-=60;g++;if(g>=24)g=0;}
		int a=g; int b=m;
			if(a>=10)cout << a;
	else cout << "0" << a;
	cout << ":";
	if(b>=10)cout << b;
	else cout << "0" << b;

	
	
	return 0;
}
