#include <iostream>
using namespace std;
int main()
{
	char a[20];
	int k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	
	cin >> a;
	
	for(int i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='A'||a[i]=='B'||a[i]=='C')cout << 2;else
		if(a[i]=='D'||a[i]=='F'||a[i]=='E')cout << 3;else
		if(a[i]=='G'||a[i]=='H'||a[i]=='I')cout << 4;else
		if(a[i]=='J'||a[i]=='K'||a[i]=='L')cout << 5;else
		if(a[i]=='M'||a[i]=='N'||a[i]=='O')cout << 6;else
		if(a[i]=='P'||a[i]=='R'||a[i]=='Q'||a[i]=='S')cout << 7;else
		if(a[i]=='T'||a[i]=='U'||a[i]=='V')cout <<8 ;else
			if(a[i]=='Y'||a[i]=='X'||a[i]=='Z'||a[i]=='W')cout << 9;
	
	}
	cout << endl;	
	}
	
		


	
	
	
	
	
	return 0;
}

