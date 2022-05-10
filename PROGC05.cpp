#include <iostream>
#include <string>
using namespace std;

int main() {
	char a;
	string b;
	int l;	
	while(cin >> a >> b)
	{
	
		l=b.length();
		for(int i=0;i<l;i++)
		{
			if(b[i]!=a)cout << b[i];
	
		}
		
		
		cout << endl;
		
		
		
	}
	
	
	
	
	
	
	
	return 0;
}