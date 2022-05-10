#include <iostream>
using namespace std;

int main() {
	int a,b,c,k;
	cin >> k;
	
	for(int j=0;j<k;j++)
	{
		cin >> a >> b >> c;
		for(int i=0;i<a;i+=b)
		{
			if(i%c!=0)cout << i << " ";
			
			
		}
		cout << endl;
	}
	
	return 0;
}