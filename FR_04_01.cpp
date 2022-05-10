#include <iostream>
#include <string>
using namespace std;

int main() {

	string a; int licz1,licz2,licz3,b;
	cin >> a;
	for(int i=0;i<a.length();i+=2)
	{
		
		b=0;
		
		
		if(a[i]!='1')
		{
		licz1=(int)a[i]-48;
		licz2=(int)a[i+1]-48;
		b+=licz1*10;
		b+=licz2;
	
		}
		else
		{
			licz1=(int)a[i]-48;
			licz2=(int)a[i+1]-48;
			licz3=(int)a[i+2]-48;
			b+=licz1*100;
			b+=licz2*10;
			b+=licz3;
			i++;
		}
			cout << (char)b;
		
	}


	return 0;
}