#include <iostream>
using namespace std;

int main() {
	char a[100];
	
	while(cin >> a)
	{
int i=0;

	while(a[i]!=NULL)
	{
		int c=a[i];
		
		c+=3;
		if(c>90)c-=26;
		char b=c;
		cout << b;
	
		i++;
	}
	cout << " ";
		
		
		
	}
	
		
	return 0;
}