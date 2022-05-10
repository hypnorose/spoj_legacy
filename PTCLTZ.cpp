#include <iostream>
using namespace std;

int main() {
	int a,i=0,k;
	cin >> k;

	for(int j=0;j<k;j++)
	{
		i=0;
				cin >> a;
				while(a!=1)
				{
					
					if(a%2==0)a/=2;
					else if(a%2==1)a=a*3+1;
					i++;
				}
				cout << i << endl;
	}
	return 0;
}