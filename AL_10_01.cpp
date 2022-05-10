#include <iostream>
using namespace std;

int main() {
	
	char z;
	int k,a;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	cin >> a;
	string licz="1";
	for(int i=0;i<a;i++)
	{
		cin >> z;
		if(z=='?'&&i==0)licz="9";
		else if(z=='?')licz+="0";
		
		if(z=='?'&&a==1)licz="10";
	}
	cout << licz << endl;
	}
	return 0;
}