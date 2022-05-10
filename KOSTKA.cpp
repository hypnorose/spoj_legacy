#include <iostream>
#include <cstring>
using namespace std;
 
 
int main() {
 
int k,n,x,y;
cin >> k >> n >> x >> y;
char r;
int a,b,c,id,g,d,l,p;
cin >> a >> b >> c;
id=a;
 
id=a;g=b;p=c;l=7-c;d=7-b;
for(int i=0;i<k;i++)
{
 
	cin >> r;
	
	
	
	if(r=='F'&&y<n)
	{
y++;
		g=id;
		id=d;
		d=7-g;
 
	}
	else if(r=='B'&&y>1)
	{
	y--;
		d=id;
		id=g;
		g=7-d;
 
	}
	else if(r=='L'&&x>1)
	{
x--;
		l=id;
		id=p;
		p=7-l;
 
	}
	else if(r=='P'&&x<n)
	{
x++;
		p=id;
		id=l;
		l=7-p;
 
 
	}

 
 
}
 
cout << id;
 
 
 
 
 
 
 
 
 
 
 
 
	return 0;	
}