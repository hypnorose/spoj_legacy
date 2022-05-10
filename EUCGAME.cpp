#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 
	int a,b,k;
cin >> k;	
for(int i;i<k;i++)
{
	cin >> a >> b;
 
 
	while(a!=b)
	{
		if(a<b)b-=a;
		if(b<a)a-=b;
 
 
 
	}
	cout << a*2 << endl;
}
 
 
 
 
	return 0;
 
}