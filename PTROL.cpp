#include <iostream>
using namespace std;

int main() {
	int s,k,a[100],b[100];
	cin >> s;
	for(int j=0;j<s;j++)
	{
		cin >> k;
		for(int i=0;i<k;i++)cin >> a[i];
		for(int i=0;i<k;i++)
		{
			if(i==k-1)cout << a[0];
			else cout << a[i+1] << " ";
		}
		cout << endl;
	}
	return 0;
}