#include <iostream>
using namespace std;


int dodatnie(int b)
{
	int i,k=1,l=b;
			for(int h=0;h<b;h++)
			{
		
		for(i=0;i<k;i++)cout << "*";
		for(i=0;i<l-k;i++)cout <<".";
		for(i=0;i<l-h;i++)cout << "*";
		for(i=0;i<h;i++)cout << ".";
		k+=1;
		cout << endl;
			}
			k=1;
			l=b;
			for(int h=0;h<b;h++)
			{
					for(i=0;i<l-k;i++)cout <<".";
			for(i=0;i<k;i++)cout << "*";
				for(i=0;i<k-1;i++)cout << ".";
			for(i=0;i<l-h;i++)cout << "*";
			
				k+=1;
			
		
		cout << endl;
			}
			
			
			
			
}
int ujemne(int b)
{

	int i,k=1,l=b;
			for(int h=0;h<b;h++)
			{
			for(i=0;i<k-1;i++)cout << ".";
			for(i=0;i<l-h;i++)cout << "*";
				for(i=0;i<l-k;i++)cout <<".";
			for(i=0;i<k;i++)cout << "*";
		
		k+=1;
		cout << endl;
			}
				 k=1;
				 l=b;
			for(int h=0;h<b;h++)
			{
					for(i=0;i<l-h;i++)cout << "*";
		for(i=0;i<h;i++)cout << ".";
		for(i=0;i<k;i++)cout << "*";
		for(i=0;i<l-k;i++)cout <<".";
		
			
				k+=1;
			
		
		cout << endl;
			}
			
	
	
	
}


int main() {
	int b;

while(cin >> b)
{
	if(b>0)
	{
		
	dodatnie(b);

		
		
	}
	if(b<0)
	{
		b*=-1;
			ujemne(b);

	}
if(b==0)break;
cout << endl;
}	
	
	
	return 0;
}