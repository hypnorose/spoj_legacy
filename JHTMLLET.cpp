#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int p=0;
	while(getline(cin,a))
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='<')p=1;
			else if(a[i]=='>')p=0;
			
			if(p==1&&(int)a[i]>=97&&a[i]<=122)
			{
				a[i]-=(int)32;
				
			}
			
			cout << a[i];
			
			
		}
		cout << endl;
		
		
		
	}
	return 0;
}