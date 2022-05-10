#include <iostream>
using namespace std;

int main() {
	
	int a,b,c,k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
			cin >> a >> b >> c;
			a=a*c;
			if(a<=b)cout << "yes";
			else cout << "no";
			cout << endl;
	}	
	return 0;
}