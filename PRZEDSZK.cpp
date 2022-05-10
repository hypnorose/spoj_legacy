#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	int a,b,k,a1,b1;
cin >> k;	
for(int i;i<k;i++)
{
	cin >> a >> b;
	a1=a;
	b1=b;
	
	while(a!=b)
	{
		if(b<a)b+=b1;
	
	else	if(a<b)a+=a1;
		
		
	}
	cout << a << endl;
	
}
	
	
	
	
	return 0;
	
}