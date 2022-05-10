#include <iostream>
using namespace std;

int main() {
	int a,b=42;
	int j=0;
	while(cin >> a)
	{
		if(a==42&&b!=42)j++;
		cout << a << endl;
		
		
		
		if(j==3)break;
		b=a;
	}
	
	
	
	return 0;
}