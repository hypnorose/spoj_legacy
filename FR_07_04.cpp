#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
	double a,b,c;
	cin >> a >> b;
	a/=100;
	b/=100;
	c=100;
	c*=1-a;
	c*=1-b;
	cout.precision(2);
	cout << fixed << 100-c << endl;
	}
	return 0;
}