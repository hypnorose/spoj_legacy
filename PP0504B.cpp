#include <iostream>
#include <string>
using namespace std;

int main() {

	int l,min,z;
	string a,b;
	cin >> z;
	for(int j=0;j<z;j++)
	{
	
		cin >> a >> b;
		if(a.length()>b.length())min=b.length();
		else
		min=a.length();
		for(int i=0;i<min;i++)
		{
			cout << a[i] << b[i];
			
			
		}
		cout << endl;
	}
	
	return 0;
}
