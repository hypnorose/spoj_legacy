#include <iostream>
using namespace std;

int main() {
	
	double a,b,c,x;
		cin >> a >> b >> c;
	if(a!=0)
	{

	x=c-b;
	x=x/a;
    cout.precision(2);
	cout << fixed << x;
	}
	else if(a==0&&b==c)cout << "NWR";
	else cout << "BR";
	
	return 0;
}
