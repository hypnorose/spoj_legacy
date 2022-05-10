#include <iostream>
using namespace std;

int main() {
	
	int a[100],w=0;
	while(cin >> a[w])
	{
		w++;
		
	}
	for(int i=w-1;i>=0;i--)
	{
		cout << a[i] << " ";
	}
	
	
	return 0;
}