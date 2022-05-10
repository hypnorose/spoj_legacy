#include <iostream>
using namespace std;

int main() {
	long long z;
	cin >> z;
	while(z--){
 	long long n,k;
 	cin >> n;

 	if(n<4)cout << "BRAK" << endl;
 	else
 	if(n%2==0)
 	{	k=n/4;
 	if(k*4==n)cout << k*k << endl;
 	else {
 	
 		cout << k*(n/2-k) << endl;
 	}
 	
 		
 		
 	}
 	else cout << "BRAK" << endl;
 
 	
 	
	}
 	
	return 0;
}