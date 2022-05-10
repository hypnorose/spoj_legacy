#include <iostream>
using namespace std;

int main() {
	
	
	int l,s=0,a,k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
		cin >> l;
		s=0;
		for(int i=0;i<l;i++)
		{
			cin >> a;
			s+=a;
		
		}
			cout << s << endl;
	}


	
	
	
	return 0;
}