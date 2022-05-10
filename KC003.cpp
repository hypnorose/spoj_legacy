#include <iostream>
using namespace std;

int main() {
	double a,b,c,m;
	
	while(cin >> a >> b >> c)
	{
			if(a<=0&&b<=0&&c<=0)cout << "0";
			else
			{
				m=0;
					if(a>m)m=a;
					if(b>m)m=b;
					if(c>m)m=c;
					a=a+b+c-m;
					if(a>=m)cout << "1";
					else cout << "0";
			}	
		cout << endl;
		
		
		
	}
	return 0;
}