#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k;
	cin >> k;
	for(int o=0;o<k;o++)
	{
	double d,h,m,s; char z;
	cin >> d >> h >> z >> m >> z >> s;

	s+=m*60;
	s+=h*3600;
	d/=1000;
	s=s/d;
	s=round(s);
	m=s/60;m=floor(m);
	s-=m*60;s=round(s);

	cout << m << ":";
	if(s<10)cout << '0';
	cout << s << endl;
	
	}
	return 0;
}