#include <iostream>
using namespace std;

int main() {
	long long suma=0,a,msuma=0;
	while(cin >> a)
	{
		if(a!=0)
		{
			suma+=a;
			msuma+=a;
			
		}
		else 
		{
			cout << suma << endl;
			suma=0;
			
			
		}
		
		
		
	}
	cout << msuma;
	return 0;
}