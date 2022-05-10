#include <iostream>
using namespace std;

int main() {
	int i,l,v1,v2,w,s;
	cin >> l;
	for(i=1;i<=l;i++)
	{
		cin >> v1 >> v2;
		w = v1*v2;
		s = v1+v2;
		w = 2*w/s;
		cout << w << endl;
		
	}
	return 0;
}
