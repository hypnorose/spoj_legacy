#include <iostream>
using namespace std;

int main() {
	int s,k,a[100],b[100];
		cin >> k >> s;
		for(int i=0;i<k;i++)cin >> a[i];
		for(int i=0;i<k;i++)
		{
			if(i>=k-s)cout << a[i-k+s] << " ";
			else cout << a[i+s] << " ";

		}

	return 0;
}

