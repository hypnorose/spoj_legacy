#include <iostream>
using namespace std;
int main()
{
	int licz,k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	
				string nowa16;
				cin >> licz;
				int licz16=licz;
				
				while(licz16!=0)
				{
					int r=licz16%16;	
					if(r==0)nowa16+="0";
				else	if(r==1)nowa16+="1";
				else	if(r==2)nowa16+="2";
				else	if(r==3)nowa16+="3";
				else	if(r==4)nowa16+="4";
				else	if(r==5)nowa16+="5";
				else	if(r==6)nowa16+="6";
				else	if(r==7)nowa16+="7";
				else	if(r==8)nowa16+="8";
				else	if(r==9)nowa16+="9";
				else	if(r==10)nowa16+="A";
				else	if(r==11)nowa16+="B";
				else	if(r==12)nowa16+="C";
				else	if(r==13)nowa16+="D";
				else	if(r==14)nowa16+="E";
				else	if(r==15)nowa16+="F";	
					licz16/=16;
					
				}
				string wynik;
			
				for(int i=nowa16.length()-1;i>=0;i--)
				{
					wynik+=nowa16[i];
					
					
				}
				
				
				if(licz==0)wynik="0";
				cout << wynik << " ";
				
				int licz11=licz;
				nowa16="";
					while(licz11!=0)
				{
					int r=licz11%11;	
					if(r==0)nowa16+="0";
				else	if(r==1)nowa16+="1";
				else	if(r==2)nowa16+="2";
				else	if(r==3)nowa16+="3";
				else	if(r==4)nowa16+="4";
				else	if(r==5)nowa16+="5";
				else	if(r==6)nowa16+="6";
				else	if(r==7)nowa16+="7";
				else	if(r==8)nowa16+="8";
				else	if(r==9)nowa16+="9";
				else	if(r==10)nowa16+="A";	
					licz11/=11;
					
				}
				wynik="";
				for(int i=nowa16.length()-1;i>=0;i--)
				{
					wynik+=nowa16[i];
					
					
				}
					if(licz==0)wynik="0";
				cout << wynik << endl;
	}
	
	
	
	
	return 0;
}

