#include <iostream>
#include <string>
using namespace std;

int main() {

	int l,k,a,w;
	
	while(cin >> l >> k)
	{
	w=0;
	for(int i=0;i<k;i++)
	{
		cin >> a;
		if(a==l)w+=1;
		
	}
	cout << w << endl;
	}
	return 0;
}
