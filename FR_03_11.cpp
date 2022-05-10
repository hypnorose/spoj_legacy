#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int w=0,licz=1,suma=0,k;
	string bin;
	
	
	cin >> k;
	
	for(int h=0;h<k;h++)
	{
	
	licz=1;
	cin >> bin;
	
	suma=0;	
	w=0;
	if(bin[bin.length()-1]=='1')w=1;
	else
	for(int i=bin.length()-2;i>=0&&w==0;i--)
	{
		if(bin[i]=='1')
		{
				if(licz==1)suma+=2;
				else
				if(licz==2)suma+=4;
				else
				if(licz==3)suma+=8;
				else
				if(licz==4{
				licz=1;
				suma+=6;}
				
				
		}
		
			suma%=10;
			licz++;
			
	}
	if(suma%10!=0)w=1;
	if(w==1)cout << "Nie";
	else cout << "Tak";
	cout << endl;
	
	
}


	

	
	
	return 0;	
}



