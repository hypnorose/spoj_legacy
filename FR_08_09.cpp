#include <iostream>
using namespace std;
int main(){
	int h;
	cin >> h;
	while(h--){
	
	int a,b,c;
	cin >> a >> b >> c;
	b+=a*c;
	int a1=c;
	int b1=b;
	while(b!=0&&c!=0){
		if(c<b)swap(c,b);
		int temp=c;
		c%=b;
		//cout << b << " " << c << endl;
	}
	if(c<b)swap(c,b);
	cout << a1/c << " " << b1/c << endl;
}
	
}