#include <iostream>
using namespace std;

int main() {
	long long a,b,z,r,k;
	cin >> z;
	for(int i=0;i<z;i++)
	{
		cin >> a >> b;
		k=a/b; //a=k*b+r
		r=a-k*b;
		
		if(b<0)b*=-1;
		if(r<0)r+=b;
		cout << r << endl;
	}
	return 0;
}
