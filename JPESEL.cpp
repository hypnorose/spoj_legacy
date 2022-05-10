#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	char a[11];
	int b[11],t,k;
	cin >> k;
	for(int j=0;j<k;j++)
	{
				for(int i=0;i<11;i++)
				{
						cin >> a[i];
						int t=a[i];
						t-=48;
						b[i]=t;
				}
				t=0;
				b[1]*=3;
				b[5]*=3;
				b[9]*=3;
				b[2]*=7;
				b[6]*=7;
				b[7]*=9;
				b[3]*=9;
				for(int i=0;i<11;i++)
				{
					t+=b[i];
					
				}
				if(t%10==0)cout << "D";
				else cout << "N";
				cout << endl;
				
	}			
	return 0;
}