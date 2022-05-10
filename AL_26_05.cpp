#include <iostream>
using namespace std;

int main() {
	string a;
	getline(cin,a);
	int i;int w;
	
	for(i=0;i<a.length();i+=2)
	{
		cout << a[i];
		
		
	}
	if(i==a.length())w=i-1;else w=i-3;
	for(i=w;i>=0;i-=2)
	{
		cout << a[i];
		
	}

	
	
	
	

	return 0;
}