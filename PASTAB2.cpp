#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char znak;
	long int k,a[10000],oper;
	cin >> k;
	for(int i=0;i<k;i++)
	{
		cin >> a[i];
		
		
	}
	cin >> znak;
	cin >> oper;
	for(int i=0;i<k;i++)
	{
		if(znak=='<')
		{
			if(a[i]<oper)cout << a[i] << endl;
			
		}
		if(znak=='>')
		{
			if(a[i]>oper)cout << a[i] << endl;
			
		}
		
		
	}
	return 0;	
}
