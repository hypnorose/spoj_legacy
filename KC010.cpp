#include <iostream>
using namespace std;

int main() {
	
	string a; int ai,sumaw,sumal;
	bool wyraz=0,liczba=0;
	while(getline(cin,a))
	{
		wyraz=0;
		liczba=0;
		sumaw=0;
		sumal=0;
		for(int i=0;i<a.length();i++)
		{	
			
			ai=a[i];
			
			if(ai>=65&&ai<=90||ai>=97&&ai<=122)
			{
				wyraz=1;
				
				
			}
			if(ai>=48&&ai<=57)
			{
				liczba=1;
				
				
			}
				
			if(ai==32)
			{
				if(wyraz==1)
				{
					sumaw++;
					wyraz=0;
				}
				if(liczba==1)
				{
					sumal++;
					
					liczba=0;
				}
			
				
			
			}
		
		}
		
		
		if(wyraz==1)
				{
					sumaw++;
					wyraz=0;
				}
				if(liczba==1)
				{
					sumal++;
					
					liczba=0;
				}
		
		
		
		
		cout << sumal << " " << sumaw << endl;
		
		
		
	}

	
	
	
	
	return 0;
}