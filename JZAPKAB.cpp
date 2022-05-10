#include <iostream>
using namespace std;

int main() {
 	string w;
	int suma=0;
	cin >> w;
	for(int i=0;i<w.length();i++)
	{
		if(w[i]=='a')suma+=1;
		if(w[i]=='b')suma+=2;
		if(w[i]=='c')suma+=3;
		if(w[i]=='d')suma+=4;
		if(w[i]=='e')suma+=5;
		if(w[i]=='f')suma+=6;
		if(w[i]=='g')suma+=7;
		if(w[i]=='h')suma+=8;
		if(w[i]=='i')suma+=9;
		if(w[i]=='k')suma+=10;
		if(w[i]=='l')suma+=20;
		if(w[i]=='m')suma+=30;
		if(w[i]=='n')suma+=40;
		if(w[i]=='o')suma+=50;
		if(w[i]=='p')suma+=60;
		if(w[i]=='q')suma+=70;
		if(w[i]=='r')suma+=80;
		if(w[i]=='s')suma+=90;
		if(w[i]=='t')suma+=100;
		if(w[i]=='v')suma+=200;
		if(w[i]=='x')suma+=300;
		if(w[i]=='y')suma+=400;
		if(w[i]=='z')suma+=500;
	}
	cout << suma;
	return 0;
}