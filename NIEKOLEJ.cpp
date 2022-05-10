#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if(a<=2&&a!=0){
		cout << "NIE";
	return 0;}
	for(int i=1;i<=a;i+=2)
	{
		cout << i << " ";
		
		
	}
	for(int i=0;i<=a;i+=2)
	{
		cout << i << " ";
		
		
	}
	return 0;
}