#include <iostream>
using namespace std;

int main() {
	
	int a[1000],k,s;
	cin >> s;
	
	for(int j=0;j<s;j++)
	{
	
				cin >> k;
				
				for(int i=0;i<k;i++)
					cin >> a[i];
					
				for(int i=1;i<k;i+=2)
					cout << a[i] << " ";
					
				for(int i=0;i<k;i+=2)
					cout << a[i] << " ";
					
					cout << endl;
	}			
	return 0;
}