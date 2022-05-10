#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	int g,m,i; char z;
	cin >> g >> z >> m;
	i=m+1;if(i==60){i-=60;g++;}if(g==24)g=0;
	if(g==0)for(i;i>=10&&i!=11&&i!=22&&i!=33&&i!=44&&i!=55;i++)if(i==60){g++;i-=60;break;}
	if(g<10&&g!=0)for(i;i%10!=g;i++)if(i==60){g++;i-=60;break;}
	if(g<10&&i==0)for(i;i%10!=g;i++);
	if(g==10)for(i;i!=1;i++)if(i==60){g++;i-=60;break;}
	if(g>10&&g!=23)
	{
		
		int temp1,temp2;
		temp1=g%10;
		temp2=g-g%10;
		temp2/=10;
		temp1=temp1*10+temp2;
		for(i;i!=temp1;i++)if(i==60){g++;i-=60;break;}
		

				temp1=g%10;
		temp2=g-g%10;
		temp2/=10;
		temp1=temp1*10+temp2;
		for(i;i!=temp1;i++)if(i==60){g++;break;}
			
		
		
		
		
		
		
	}

	if(g==20&&i==60){g=20;i=2;}
	if(g>=16&&g<20){g=20;i=2;}
	if(g==23&&i>32){g=0;i=0;}
	if(g==23&&i<32)i=32;
	
	
	if(g<10)cout << '0' << g;
	else cout << g;
	cout << ":";
	if(i<10)cout << '0' << i;
	else cout << i;
	cout << endl;
	}
	return 0;
}