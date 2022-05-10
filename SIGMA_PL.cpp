#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	while(n--){
		int m;
		cin >> m;
		if(m==1){
				cout << 1 << endl;
				continue;
		}
		unsigned long long suma=0;
		for(int i=1;i<=sqrt(m);i++)if(m%i==0){
			suma+=i;
			if(i!=sqrt(m))suma+=m/i;
			
		}
		cout << suma << endl;
	}
	return 0;
}