#include <iostream>
using namespace std;

int main() {
	int z[10],a,b;
	char s;
	while(cin >> s >> a >> b)
	{
		if(s=='z')
		{
			z[a]=b;
			
		}
		else if(s=='+')cout << z[a]+z[b];
		else if(s=='-')cout << z[a]-z[b];
		else if(s=='*')cout << z[a]*z[b];
		else if(s=='/')cout << z[a]/z[b];
		else if(s=='%')cout << z[a]%z[b];
		if(s!='z')cout << endl;
		
		
		
	}
		
	return 0;
}