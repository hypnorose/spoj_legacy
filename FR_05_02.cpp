#include <iostream>
using namespace std;

int main() {
	int a,b,c,i,j,licznik=0;
	string abc;
	cin>>a;getline(cin,abc);
	
	bool male,duze,licz,znaki;
	for(i=0;i<a;i++)
	{
		getline(cin,abc);
		male=0;
		duze=0;
		licz=0;
		znaki=0;
		for(j=0;j<abc.length();j++)
		{
			if(abc[j]>='a' && abc[j]<='z')
			{
				male=1;
			}
			else if(abc[j]>='A' && abc[j]<='Z')
			{
				duze=1;
			}
			else if(abc[j]>='0' && abc[j]<='9')
			{
				licz=1;
			}
			else
			{
				znaki=1;
			}
		}
		
		if(male && duze && licz && znaki&&abc.length()>=8)
		{
			if(licznik!=0)
			cout<<endl;
		cout<<abc;
		licznik=1;
		}
	}
}