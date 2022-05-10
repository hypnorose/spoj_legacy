#include <iostream>

using namespace std;

int main() {
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		a=a%10;
		if(b==0){cout << 1 << endl;continue;}
		b=b%4;
		if(b==0)b=4;
		int wynik=1;
		for(int i=0;i<b;i++){
			wynik*=a;
		}
		cout << wynik%10 << endl;
	}
	return 0;
}