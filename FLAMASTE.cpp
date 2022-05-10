#include <iostream>
using namespace std;

int main() {
	char a[100000];
	int j,k,i;
	cin >> k;
	for(int b=0;b<k;b++)
	{
	
	cin >> a;
	j=1;
	for(i=0;a[i]!=NULL;i++)
	{
		
		
			if(a[i]==a[i-1])j++;
			else
			{
				
				if(j>2)cout << j;
				else if(j==2)cout << a[i-1];
				
				
				cout << a[i];
				j=1;
				
				
			}
		
		
		
	}
	if(j>2)cout << j;
	if(j==2)cout << a[i-1];
	cout << endl;
	}
	return 0;
}