#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	for(int h=0;h<k;h++)
	{string a,b,wynik;
	cin >> a >> b;
	int al=a.length(); int bl=b.length();
	int tempa,tempb,reszta=0;
	
	if(al>bl)
	{
	string zera="";
	int rozn=al-bl;
	while(rozn--)zera+='0';
	b=zera+b;
		bl=b.length();
		
	}
	if(bl>al)
	{
	string zera="";
	int rozn=bl-al;
	while(rozn--)zera+='0';
	a=zera+a;
	al=a.length();	
		
	}
	
	
	
	
	for(int i=bl-1;i>=0;i--)
	{
		tempa=a[i]-48;
		tempb=b[i]-48;
		tempa+=tempb+reszta;
		reszta=0;
		if(tempa>=10)
		{
		reszta=1;	
		
			tempa-=10;
		
		}
		wynik+=(char)tempa+48;
		if(i==0&&reszta==1)wynik+='1';
		
		
	}
	string wynik2="";
	for(int i=wynik.length()-1;i>=0;i--)
	{
		wynik2+=wynik[i];
	
		
	}
		cout << wynik2 << endl;
	}
	return 0;
}