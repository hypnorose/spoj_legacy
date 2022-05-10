#include <iostream>
using namespace std;

int main() {
	
	
	char a[10000];
	int k, i;
	cin >> k;
	for(int d=0;d<k;d++)
	{
			cin >> a;
			for(i=0;a[i]!=NULL;i++);
			i=i/2;
			for(int j=0;j<i;j++)
			cout << a[j];
			cout << endl;
	
	}
	
	
	return 0;
}