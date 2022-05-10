#include <iostream>
using namespace std;

int main() {
	string a;
	while(getline(cin,a))
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='A'||a[i]=='a')cout << ".-";
			else if(a[i]=='B'||a[i]=='b')cout << "-...";
		else 	if(a[i]=='C'||a[i]=='c')cout << "-.-.";
			else if(a[i]=='D'||a[i]=='d')cout << "-..";
		else 	if(a[i]=='E'||a[i]=='e')cout << ".";
		else 	if(a[i]=='F'||a[i]=='f')cout << ".-..";
		else 	if(a[i]=='G'||a[i]=='g')cout << "--.";
		else 	if(a[i]=='H'||a[i]=='h')cout << "....";
		else 	if(a[i]=='I'||a[i]=='i')cout << "..";
		else 	if(a[i]=='J'||a[i]=='j')cout << ".---";
		else 	if(a[i]=='K'||a[i]=='k')cout << "-.-";
		else 	if(a[i]=='L'||a[i]=='l')cout << "..-.";
		else 	if(a[i]=='M'||a[i]=='m')cout << "--";
		else 	if(a[i]=='N'||a[i]=='n')cout << "-.";
		else 	if(a[i]=='O'||a[i]=='o')cout << "---";
		else 	if(a[i]=='P'||a[i]=='p')cout << ".--.";
		else 	if(a[i]=='Q'||a[i]=='q')cout << "--.-";
			else if(a[i]=='R'||a[i]=='r')cout << ".-.";
			else if(a[i]=='S'||a[i]=='s')cout << "...";
			else if(a[i]=='T'||a[i]=='t')cout << "-";
			else if(a[i]=='U'||a[i]=='u')cout << "..-";
			else if(a[i]=='V'||a[i]=='v')cout << "...-";
			else if(a[i]=='W'||a[i]=='w')cout << ".--";
			else if(a[i]=='X'||a[i]=='x')cout << "-..-";
	else 		if(a[i]=='Y'||a[i]=='y')cout << "-.--";
		else 	if(a[i]=='Z'||a[i]=='z')cout << "--..";
			cout << "/";
			
			
			
			
			
			
			
			
			
			
			
		}
		
		
		
		
		
		
		
		
		
		cout << endl;
		
	}
	return 0;
}