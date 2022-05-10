#include <iostream>
using namespace std;

int main() {
	int w;
	cin >> w;
	while(w--){
	long long n;
	long long k=0;
	
	cin >> n;
	
	for(int i=5;i<=n;i*=5){
		k+=n/i;
		
		
	}
	
	
	
	cout << k << endl;
	}


	return 0;
}