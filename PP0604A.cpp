#include <iostream>
#include <string>
using namespace std;

int main() {

	int a[100],fajneid,l,k;
	double temp,srednia=0,naj=100;
	cin >> k;
	for(int m=0;m<k;m++)
	{
		
	srednia=0;
	naj=100;
			cin >> l;
			for(int f=0;f<l;f++)
			{
					cin >> a[f];
					temp=a[f];
					srednia+=temp;
			}
			srednia/=l;
			for(int j=0;j<l;j++)
			{
				
			temp=a[j];
			
			if(srednia>=temp)
				{
					if(srednia-temp<naj)
					{
						fajneid=j;
						naj=srednia-temp;
					}
				}
			else
			{
		
					if(temp-srednia<naj)
					{
						fajneid=j;
						naj=temp-srednia;
					}
				
				
			}
				
				
			}
			cout << a[fajneid] << endl;
			
			
	}
	return 0;
}
