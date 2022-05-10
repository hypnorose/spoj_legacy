#include <iostream>
using namespace std;

int main() {
	int l1,l2,d1,d2,p1,p2,g1,g2,a,b,sumaobydwu;
	cin >> l1 >> d1 >> p1 >> g1;
	cin >> l2 >> d2 >> p2 >> g2;
	sumaobydwu=(g1-d1)*(p1-l1)+(g2-d2)*(p2-l2);
	if(l1<=l2&&p1>=l2&&p1<=p2)a=p1-l2;
	else if(p1>=p2&&l1>=l2&&l1<=p2)a=p2-l1;
	else if(l1>=l2&&l1<=p2&&p1>=l2&&p1<=p2)a=p1-l1;
	else if(l2>=l1&&l2<=p1&&p2>=l1&&p2<=p1)a=p2-l2;
	else a=0;
	if(d1<=d2&&g1>=d2&&g1<=g2)b=g1-d2;
	else if(g1>=g2&&d1>=d2&&d1<=g2)b=g2-d1;
	else if(d1>=d2&&d1<=g2&&g1>=d2&&g1<=g2)b=g1-d1;
	else if(d2>=d1&&d2<=g1&&g2>=d1&&g2<=g1)b=g2-d2;
	else b=0;
//	cout << a << endl <<  b;
	cout << sumaobydwu-(a*b);
	return 0;
}