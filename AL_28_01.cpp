#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string wyraz;
	cin >> wyraz;
	int id=(n/2)+1;

	for(int i=1;i<=n;i+=2)
	{
	
		for(int j=0;j<(n-i)/2;j++)
		{
			cout << ".";
			
			
			
		}
		for(int j=id-1;j<id+i-1;j++)
		{
			cout << wyraz[j];
			
		}
		
		for(int j=0;j<(n-i)/2;j++)
		{
			cout << ".";
			
			
			
		}
		id--;
		
		
		cout << endl;
		
	}
	return 0;
}