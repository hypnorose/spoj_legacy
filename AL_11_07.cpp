#include <iostream>
#include <cstring>

using namespace std;

int main() {

		string a;
		char b[300];
	
		while(getline(cin,a))
		{
				for(int i=0;i<a.length();i++)
				{
					 if(i%2==0)b[i]=a[i+1];
					 if(i%2==1)b[i]=a[i-1];
					 if(i%2==0&&i==a.length()-1)b[i]=a[i];

				
					
				}
				for(int i=0;i<a.length();i++)cout << b[i];	
				
				cout << endl;		
			

			
			
		}
		

	return 0;
}
