#include <iostream>
using namespace std;

int main() 
{
	int l,p,czas,c,k;
	cin >> k;
	for(int j=0;j<k;j++)
	{
			cin >> l >> p;
			c=0;
			for(int i=0;i<l;i++)
			{
				cin >> czas;
				c+=86400/czas;
			
			}
			
			if(c%p==0)c=c/p;
			else c=c/p+1;
			cout << c << endl;
	}
	
	return 0;
}