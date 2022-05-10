#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin >> n;
	
	while(n--){
	
	int a,b;
	cin >> a >> b;
	if(a%2!=0){
		cout << "BRAK" << endl;
		continue;
	}
	if(b+(a/2)>a){
		cout << (b+(a/2))%a;
	}
	else cout << b+(a/2);
	cout << endl;
	}
}
