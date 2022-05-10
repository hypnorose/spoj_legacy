#include <iostream>

using namespace std;

int main() {
	char a[20];
	while(cin >> a)
	{
		
		for(int i=0;i<20;i+=2)
		{
		int temp=0;
		temp+=(int)a[i]-65;
		temp+=(int)(a[i+1]-65)*16;
		cout << (char)temp;
		}
		cout << endl;
	
	}

	
	
	return 0;	
}
