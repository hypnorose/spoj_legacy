#include <iostream>
using namespace std;

int main() {
	unsigned long long a;
	while(cin >> a){
		if(a%5==0&&a%3==0)cout << "SPOKOKOKO" << endl;
		else if(a%5==0)cout << "SPOKO" << endl;
		else if(a%3==0)cout << "KOKO" << endl;
		else cout << a << endl;
		
	}
	return 0;
}