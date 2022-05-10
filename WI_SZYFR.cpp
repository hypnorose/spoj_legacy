#include <iostream>
using namespace std;

int main() {
	string wybierz,klucz,wyraz;int k;char z;

			cin >> wybierz >> klucz >> wyraz;
			int iklucz[klucz.length()];
			for(int i=0;i<klucz.length();i++)
			{
				iklucz[i]=klucz[i]-48;
				
				
				
			}
			k=0;
			
			if(wybierz=="SZYFRUJ")
			{
				for(int i=0;i<wyraz.length();i++)
					{
						z=(int)wyraz[i]+iklucz[k];
						if(z>90){z-=90;z+=64;}
						
						cout << z;
						k++;
						if(k>=klucz.length())k=0;
							
							
							
					}
				
				
	
			}
			
				if(wybierz=="DESZYFRUJ")
			{
				for(int i=0;i<wyraz.length();i++)
					{
						z=(int)wyraz[i]-iklucz[k];
						if(z<65){z+=90;z-=64;}
						
						cout << z;
						k++;
						if(k>=klucz.length())k=0;
							
							
							
					}
				
				
	
			}
			
			
			
		
	return 0;
}