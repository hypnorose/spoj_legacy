#include <iostream>
#include <string>
using namespace std;

int main() {

	int a,b,k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
	
	cin >> b >> a;
	b-=1;
	if(b!=0)
	{
	
		if(a%b==0)cout << "NIE";
		else cout << "TAK";
	}
	else cout << "TAK";
		cout << endl;
	}	
	
	
	return 0;
}
