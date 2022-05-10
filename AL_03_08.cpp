#include <iostream>
using namespace std;

int main() 
{
	long long a, m=0, t=0,k=0,h;
	
	while(1)
	{
		cin >> a;
		
		
		if(a>m)
	{	t=m;
		m=a;
	}
		if(k<m&&k>t)
		t=k;
	
		k=a;
if(a==0)break;

	}

	if(t==0)
	t=m;
	cout << t;
	return 0;
}
